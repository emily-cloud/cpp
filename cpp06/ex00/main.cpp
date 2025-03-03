
#include "ScalarConverter.hpp"

/*
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}
	*/

//test code

int main(int argc, char **argv) {
	(void)argv;

	if (argc != 2) {
		std::cout << "Usage: ./convert [string]" << std::endl;
		return 1;
	}

	ScalarConverter::convert("nan");
	ScalarConverter::convert("-nan");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("42f");
	ScalarConverter::convert("256");
	ScalarConverter::convert("256");
	ScalarConverter::convert("256f");
	ScalarConverter::convert("256.0");
	ScalarConverter::convert("10.0f");
	ScalarConverter::convert("10.0");
	ScalarConverter::convert("10");
	//ScalarConverter::convert("f");
	//ScalarConverter::convert("ff");
	ScalarConverter::convert("inf");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("inff");
	ScalarConverter::convert("-inff");

	//ScalarConverter::convert("hey");
	ScalarConverter::convert(" ");
	ScalarConverter::convert("98");
	ScalarConverter::convert("-98.f");
	ScalarConverter::convert("-98");
	ScalarConverter::convert("0");
	ScalarConverter::convert("-0");
	ScalarConverter::convert("98.01f");
	ScalarConverter::convert("-98.01");
	ScalarConverter::convert("-98.01");
	ScalarConverter::convert("98.01");

	ScalarConverter::convert("-inff");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("inf");
	ScalarConverter::convert("inff");
	ScalarConverter::convert("2147483648");
	ScalarConverter::convert("2147483647");
	ScalarConverter::convert("2147483649");
	ScalarConverter::convert("-4.5e10");
	ScalarConverter::convert("-4.5e-10");
	ScalarConverter::convert("4.5e10");
	ScalarConverter::convert("4.5e-10");


	return 0;
}


