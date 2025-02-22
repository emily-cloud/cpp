
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("b1", 149);
	Bureaucrat b2("b2", 150);
	Bureaucrat b3("b3", 2);
	Bureaucrat b4("b4", 1);
	//Bureaucrat b5("b5", 0);


	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;


	try
	{
		b1.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b2.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b3.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b4.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
