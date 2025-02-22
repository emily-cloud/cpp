
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

std::string const & Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrementGrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (os);
}

void Bureaucrat::signForm(Form & src)
{
	try
	{
		src.beSigned(*this);
		std::cout << this->getName() << " signs " << src.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn’t sign " << src.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
