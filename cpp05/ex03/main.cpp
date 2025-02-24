
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;

	Bureaucrat b1("b1", 120);
	Bureaucrat b2("b2", 50);
	Bureaucrat b3("b3", 2);

	AForm* form1 = NULL; // RobotomyRequestForm 72, 45
	AForm* form2 = NULL; // PresidentialPardonForm 25, 5
	AForm* form3 = NULL; // ShrubberyCreationForm 145, 137

	try
	{
		form1 = intern.makeForm("robotomy request", "target1");
		std::cout << "Form " << form1->getName() << " is created" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form2 = intern.makeForm("presidential pardon", "target2");
		std::cout << "Form " << form2->getName() << " is created" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form3 = intern.makeForm("shrubbery creation", "target3");
		std::cout << "Form " << form3->getName() << " is created" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// for unknown form
	// try
	// {
	// 	intern.makeForm("unknown form", "target4");
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	try
	{
		b1.signForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.executeForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.signForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.signForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.executeForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		b2.signForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.executeForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.signForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.signForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.executeForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		b3.signForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.executeForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.signForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.signForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.executeForm(*form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;

	return (0);
}
