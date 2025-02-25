
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

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Form not found");
}

AForm * Intern::createRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

AForm * Intern::createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(std::string const & formName, std::string const & target)
{
	AForm* (Intern::*funcs[])(std::string const&) = { &Intern::createPresidentialPardonForm, &Intern::createRobotomyRequestForm, &Intern::createShrubberyCreationForm };
	std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	int index = -1;

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case 0:
			return (this->*funcs[0])(target);
		case 1:
			return (this->*funcs[1])(target);
		case 2:
			return (this->*funcs[2])(target);
		default:
			break;
	}
	// If not found, throw an exception
	throw FormNotFoundException();
}

// Another way to implement makeForm method, do not use function pointers and creat functions for each form
/*
AForm* Intern::makeForm(std::string const & formName, std::string const & target)
{
	std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	int index = -1;

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			break;
	}
	// If not found, throw an exception
	throw FormNotFoundException();
}
	*/
