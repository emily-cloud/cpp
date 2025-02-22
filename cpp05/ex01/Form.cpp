
#include "Form.hpp"

Form::Form():
	name("default"),
	sign(false),
	gradeToSign(150),
	gradeToExecute(150)
{
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute):
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

Form::Form(Form const & src):
	name(src.getName()),
	gradeToSign(src.getGradeToSign()),
	gradeToExecute(src.getGradeToExecute())
{
}

Form::~Form()
{
}

Form & Form::operator=(Form const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

std::string const& Form::getName() const
{
	return (name);
}

bool Form::getSign() const
{
	return (sign);
}

void Form::execute(Bureaucrat const & executor) const
{
	if (sign == false)
		throw NotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowToExecuteException();
}

void Form::setSign(bool sign)
{
	this->sign = sign;
}

int Form::getGradeToSign() const
{
	return (gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (gradeToExecute);
}

void Form::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > gradeToSign)
		throw GradeTooLowException();
	sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
const char*Form::NotSignedException:: what() const throw()
{
	return ("Form is not signed");
}

const char*Form::GradeTooLowToExecuteException::what() const throw()
{
	return ("Grade is too low to execute");
}

std::ostream & operator<<(std::ostream & os, Form const & src)
{
	os << src.getName() << ", form grade to sign " << src.getGradeToSign() << ", form grade to execute " << src.getGradeToExecute() << ", form is signed " << src.getSign();
	return (os);
}
