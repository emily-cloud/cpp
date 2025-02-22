
#include "AForm.hpp"

AForm::AForm():
	name("default"),
	sign(false),
	gradeToSign(150),
	gradeToExecute(150)
{
}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute):
	name(name),
	gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute)
{
	sign = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const & src):
	name(src.getName()),
	gradeToSign(src.getGradeToSign()),
	gradeToExecute(src.getGradeToExecute())
{
}

AForm::~AForm()
{
}

AForm & AForm::operator=(AForm const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

std::string const& AForm::getName() const
{
	return (name);
}

void AForm::setSign(bool sign)
{
	this->sign = sign;
}

bool AForm::getSign() const
{
	return (sign);
}

int AForm::getGradeToSign() const
{
	return (gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (gradeToExecute);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
const char*AForm::NotSignedException:: what() const throw()
{
	return ("Form is not signed");
}

const char*AForm::GradeTooLowToExecuteException::what() const throw()
{
	return ("Grade is too low to execute");
}

std::ostream & operator<<(std::ostream & os, AForm const & src)
{
	os << src.getName() << ", form grade to sign " << src.getGradeToSign() << ", form grade to execute " << src.getGradeToExecute() << ", form is signed " << src.getSign();
	return (os);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (sign == false)
		throw NotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowToExecuteException();
}
