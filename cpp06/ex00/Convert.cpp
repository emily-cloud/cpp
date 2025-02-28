
#include "ScalarConverter.hpp"

void convertChar(std::string const &literal)
{
	//std::cout << "literal: " << literal << " is char"<< std::endl << std::endl;

	std::cout << std::endl;
	if( literal[0] < 32 || literal[0] > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char: '" << literal[0] << "'" << std::endl;
	}

	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl << std::endl;
}

void convertInt(std::string const &literal)
{
	//std::cout << "literal: " << literal << " is int"<< std::endl << std::endl;

	std::cout << std::endl;
	std::stringstream iss;
	iss << literal;
	long long int i;// to handle out of int range
	iss >> i;

	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
	{
		std::cout << "Input is out of int range" << std::endl << std::endl;
		return;
	}

	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (i < 32 || i > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl << std::endl;
}

void convertFloat(std::string const &literal)
{
	//std::cout << "literal: " << literal << " is float"<< std::endl << std::endl;
	std::cout << std::endl;
	std::string modified_literal = literal;
		modified_literal.resize(literal.size() - 1);

	if (literal == "nanf" || literal == "-nanf" || literal == "inff" || literal == "-inff" || literal == "+inff" || literal == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << modified_literal<< std::endl << std::endl;
		return;
	}

	bool isExp = (literal.find('e') != std::string::npos || literal.find('E') != std::string::npos);
	float f = std::atof(literal.c_str());
	std::ostringstream oss;
	oss << f;
	std::string floatStr = oss.str();

	if(!isExp && floatStr.find('.') == std::string::npos)
	{
		floatStr += ".0";
	}
	if(isExp)
	{
		floatStr = modified_literal;
	}

	if (f < -std::numeric_limits<float>::max() || f > std::numeric_limits<float>::max())
	{
		std::cout << "Input out of float range" << std::endl;
		return;
	}

	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if(f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: " << floatStr << 'f' << std::endl;
	std::cout << "double: " << floatStr << std::endl << std::endl;
}

void convertDouble(std::string const &literal)
{
	//std::cout << "literal: " << literal << " is double"<< std::endl << std::endl;
	std::cout << std::endl;
	if (literal == "nan" || literal == "-nan" || literal == "inf" || literal == "-inf" || literal == "+inf" || literal == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << 'f' << std::endl;
		std::cout << "double: " << literal << std::endl << std::endl;
		return;
	}

	bool isExp = (literal.find('e') != std::string::npos || literal.find('E') != std::string::npos);

	std::stringstream iss;
	iss << literal;
	double d;
	iss >> d;

	std::ostringstream oss;
	oss << d;
	std::string doubleStr = oss.str();

	if(!isExp && doubleStr.find('.') == std::string::npos)
	{
		doubleStr += ".0";
	}
	if(isExp)
	{
		doubleStr = literal;
	}
	if (d < -std::numeric_limits<double>::max() || d > std::numeric_limits<double>::max())
	{
		std::cout << "Input out of double range" << std::endl;
		return;
	}

	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if(d < std::numeric_limits<int>::min() || d> std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if(d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << doubleStr << 'f' << std::endl;

	std::cout << "double: " << doubleStr << std::endl << std::endl;
}

