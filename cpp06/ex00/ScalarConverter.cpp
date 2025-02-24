
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	(void)src;
}
ScalarConverter::~ScalarConverter()
{
}
ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
	(void)src;
	return (*this);
}

const char* ScalarConverter::InvalidInputException::what() const throw()
{
	return ("Invalid specifier input");
}


void ScalarConverter::convert(std::string const &literal)
{
	if(is_int(literal))
		print_int(literal);
	else if(is_float(literal))
		print_float(literal);
	else if(is_double(literal))
		print_double(literal);
	else if(is_char(literal))
		print_char(literal);
	else
		throw InvalidInputException();
}

