
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
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;

}

void convertInt(std::string const &literal)
{
	std::cout << "literal: " << literal << " is int"<< std::endl << std::endl;

	int i = std::atoi(literal.c_str());
	std::cout << "i: " << i << std::endl << std::endl;

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
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void convertDouble(std::string const &literal)
{
	std::cout << "literal: " << literal << " is double"<< std::endl << std::endl;

	if (literal == "nan" || literal == "inf" || literal == "-inf" || literal == "+inf" || literal == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
		return;
	}

	bool isDot = false;
	bool isExp = false;
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '.')
			isDot = true;
		if (literal[i] == 'e' || literal[i] == 'E')
			isExp = true;
	}

	char* end;
	double d = std::strtod(literal.c_str(), &end);
	std::cout << "d: " << d << std::endl << std::endl;
	if (isDot == false && isExp == false)
	{
		if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (d < 32 || d > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0"<< std::endl;
	}
	if (isDot && !isExp)
	{
		if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (d < 32 || d > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	if (isExp)
	{
		if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (d < 32 || d > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal << std::endl;
	}

}


void convertFloat(std::string const &literal)
{
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

	bool isDot = false;
	bool isExp = false;

	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '.')
			isDot = true;
		if (literal[i] == 'e' || literal[i] == 'E')
			isExp = true;
	}

	float f = std::atof(literal.c_str());  // Convert to float
	std::cout << "f: " << f << std::endl<< std::endl;
	if(!isDot && !isExp)
	{
		if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (f < 32 || f > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << static_cast<int>(f) << ".0f"<< std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0"<< std::endl;
	}
	if (isDot && !isExp)
	{
		if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (f < 32 || f > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << static_cast<float>(f) << 'f' << std::endl;
		std::cout << "double: " << f << std::endl;
	}
	if (isExp)
	{
		if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (f < 32 || f > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << modified_literal << std::endl;
	}
}
