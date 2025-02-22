
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b1("b1", 26);
	Bureaucrat b2("b2", 20);
	Bureaucrat b3("b3", 1);
	//Bureaucrat b4("b4", 0);

	Form f1("f1", 25, 15);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	try
	{
		b1.signForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b1.executeForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.signForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.executeForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.signForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.executeForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
