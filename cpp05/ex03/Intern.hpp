
#ifndef INTERN_HPP
# define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <map>
#include <string>

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & src);
		AForm * makeForm(std::string const & formName, std::string const & target);
		AForm * createRobotomyRequestForm(std::string const & target);
		AForm * createPresidentialPardonForm(std::string const & target);
		AForm * createShrubberyCreationForm(std::string const & target);
		class FormNotFoundException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


#endif
