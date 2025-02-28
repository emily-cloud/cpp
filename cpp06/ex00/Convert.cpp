
#include "ScalarConverter.hpp"

void convertChar(std::string const &literal)
{
	std::cout << "literal: " << literal << " is char"<< std::endl << std::endl;

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
	std::cout << "literal: " << literal << " is int"<< std::endl << std::endl;

	int i = std::atoi(literal.c_str());

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
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl << std::endl;
}

void convertFloat(std::string const &literal)
{
	try
	{
		std::atof(literal.c_str());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return;
	}
	std::cout << "literal: " << literal << " is float"<< std::endl << std::endl;
	std::string modified_literal = literal;
        modified_literal.resize(literal.size() - 1);

	if (literal == "nanf" || literal == "inff" || literal == "-inff" || literal == "+inff" || literal == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << modified_literal << std::endl;
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
	if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max())
		return;

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
	std::cout << "literal: " << literal << " is double"<< std::endl << std::endl;

	if (literal == "nan" || literal == "inf" || literal == "-inf" || literal == "+inf" || literal == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << 'f' << std::endl;
		std::cout << "double: " << literal << std::endl;
		return;
	}

	bool isExp = (literal.find('e') != std::string::npos || literal.find('E') != std::string::npos);

	char* end;
	double d = std::strtod(literal.c_str(), &end);

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
	if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
		return;

	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if(d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if(d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << doubleStr << 'f' << std::endl;

	std::cout << "double: " << doubleStr << std::endl << std::endl;
}

