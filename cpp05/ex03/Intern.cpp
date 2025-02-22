
#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}
Intern::~Intern()
{
}
Intern& Intern::operator=(Intern const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

AForm* Intern::makeForm(std::string const & formName, std::string const & target)
{
	if (formName == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (formName == "presidential pardon")
		return (new PresidentialPardonForm(target));
	else if (formName == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else
		throw FormNotFoundException();
}
const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Form not found");
}
