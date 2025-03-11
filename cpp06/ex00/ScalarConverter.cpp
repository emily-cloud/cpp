
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

// 1 is char, 2 is int, 3 is float, 4 is double, -1 is invalid
int ScalarConverter::typeCheck(const std::string &str) {
    char *endptr;

    // Check if the string is empty
    if (str.empty())
        return -1;

    // Check if the string is a char
    if (str.length() == 1 && !isdigit(str[0]))
    {
        return 0;
    }

	if (str == "nan" || str == "-nan" || str == "+nan" || str == "inf" || str == "-inf" || str == "+inf" || str == "nanf" || str == "-nanf" || str == "+nanf" ||  str == "inff" || str == "-inff" || str == "+inff")
	{
		return (str[str.length() - 1]== 'f') ? 2 : 3;
	}

    // Check if the string is a int
    std::strtoll(str.c_str(), &endptr, 10);
    if (*endptr == '\0')
    {
        return 1;
    }

    // Check if the string is a float
	std::strtof(str.c_str(), &endptr);
    if (*endptr == 'f' && *(endptr + 1) == '\0')
	{
        return 2;
    }

    // Check if the string is a double
    std::strtod(str.c_str(), &endptr);
    if (*endptr == '\0') {
        return 3;
    }

    return -1;
}

void ScalarConverter::convert(const std::string &str)
{
    char charValue = 0;
    long long intValue = 0;
    float floatValue = 0;
    double doubleValue = 0;

    switch (typeCheck(str)) {
        case 0:// char
            charValue = str[0];
            intValue = static_cast<int>(charValue);
            floatValue = static_cast<float>(charValue);
            doubleValue = static_cast<double>(charValue);
            break;
        case 1: // int
            intValue = std::strtol(str.c_str(), NULL, 10);
            charValue = static_cast<char>(intValue);
            floatValue = static_cast<float>(intValue);
            doubleValue = static_cast<double>(intValue);
            break;
        case 2:// float
            floatValue = std::strtof(str.c_str(), NULL);
            charValue = static_cast<char>(floatValue);
            intValue = static_cast<int>(floatValue);
            doubleValue = static_cast<double>(floatValue);
            break;
        case 3:// double
            doubleValue = std::strtod(str.c_str(), NULL);
            charValue = static_cast<char>(doubleValue);
            intValue = static_cast<int>(doubleValue);
            floatValue = static_cast<float>(doubleValue);
            break;
		default:// invalid
			throw InvalidInputException();
			break;
        }

	if (doubleValue >= std::numeric_limits<char>::min() && doubleValue <= std::numeric_limits<char>::max()) {
		if (std::isprint(static_cast<unsigned char>(doubleValue))) {
			std::cout << "char: '" << static_cast<char>(doubleValue) << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
	} else {
		std::cout << "char: impossible" << std::endl;
	}

	if (doubleValue >= std::numeric_limits<int>::min() && doubleValue <= std::numeric_limits<int>::max())
	{
 		std::cout << "int: " << intValue << std::endl;
	}
	else
	{
		std::cout << "int: impossible" << std::endl;
	}

	std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
    return;
}
