
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class 	Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & src);
		std::string const & getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form & src);
		void executeForm(Form const & form);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);

#endif
