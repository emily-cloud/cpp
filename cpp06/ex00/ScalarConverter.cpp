
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
	if(isInt(literal))
		convertInt(literal);
	else if(isDouble(literal))
		convertDouble(literal);
	else if(isFloat(literal))
		convertFloat(literal);
	else if(isChar(literal))
		convertChar(literal);
	else
		throw InvalidInputException();
}

