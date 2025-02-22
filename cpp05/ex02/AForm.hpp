
#ifndef AFORM_HPP
# define AFORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"
#include <ctime> // for time, srand and rand
#include <cstdlib>// for srand and rand
#include <fstream>

class AForm
{
	private:
		std::string const	name;
		bool				sign;
		int const			gradeToSign;
		int const			gradeToExecute;

	public:
		AForm();
		AForm(std::string const &name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		virtual ~AForm();
		AForm & operator=(AForm const & src);
		std::string const & getName() const;
		void setSign(bool sign);
		virtual bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void beSigned(Bureaucrat const & src) = 0;
		virtual void execute(Bureaucrat const & executor) const;
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

std::ostream & operator<<(std::ostream & os,AForm const & src);

#endif
