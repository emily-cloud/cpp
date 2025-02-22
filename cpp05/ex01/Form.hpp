
#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	name;
		bool				sign;
		int const			gradeToSign;
		int const			gradeToExecute;

	public:
		Form();
		Form(std::string const &name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		~Form();
		Form & operator=(Form const & src);
		std::string const & getName() const;
		void setSign(bool sign);
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat const & src);
		void execute(Bureaucrat const & executor) const;
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
		class NotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
			};
		class GradeTooLowToExecuteException : public std::exception {
			public:
				virtual const char* what() const throw();
			};
};

std::ostream & operator<<(std::ostream & os, Form const & src);

#endif
