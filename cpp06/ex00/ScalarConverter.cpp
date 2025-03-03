
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
    if (str.size() == 1 && !std::isdigit(str[0]))
        return 0;

    // Check if the string is a int
    std::strtoll(str.c_str(), &endptr, 10);
    if (*endptr == '\0')
        return 1;

    // Check if the string is a float
    std::strtof(str.c_str(), &endptr);
    if (strcmp(endptr, "f") == 0) {
        return 2;
    }

    // Check if the string is a double
    std::strtod(str.c_str(), &endptr);
    if (*endptr == '\0') {
        return 3;
    }

    return -1;
}

void ScalarConverter::convert(const std::string &str) {
    char charValue = 0;
    long int intValue = 0;
    float floatValue = 0;
    double doubleValue = 0;

    switch (typeCheck(str)) {
        case 0:
            charValue = str[0];
            intValue = static_cast<int>(charValue);
            floatValue = static_cast<float>(charValue);
            doubleValue = static_cast<double>(charValue);
            break;
        case 1:
            intValue = std::strtol(str.c_str(), NULL, 10);
            charValue = static_cast<char>(intValue);
            floatValue = static_cast<float>(intValue);
            doubleValue = static_cast<double>(intValue);
            break;
        case 2:
            floatValue = std::strtof(str.c_str(), NULL);
            charValue = static_cast<char>(floatValue);
            intValue = static_cast<int>(floatValue);
            doubleValue = static_cast<double>(floatValue);
            break;
        case 3:
            doubleValue = std::strtod(str.c_str(), NULL);
            charValue = static_cast<char>(doubleValue);
            intValue = static_cast<int>(doubleValue);
            floatValue = static_cast<float>(doubleValue);
            break;
		default:
			throw InvalidInputException();
			break;
        }

	if (doubleValue > 32  &&  doubleValue < 126 )
		std::cout  << "char: " << static_cast<char>(doubleValue) << std::endl;
	else if ((doubleValue <= 32 && doubleValue >= 0) || (doubleValue >= 126 && doubleValue <= 255))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;

    if (doubleValue > std::numeric_limits<int>::min() && doubleValue < std::numeric_limits<int>::max()) {
        std::cout << "int: " << intValue << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }

	if (doubleValue > std::numeric_limits<float>::min() && doubleValue < std::numeric_limits<float>::max()) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
	} else {
		std::cout << "float: impossible" << std::endl;
	}

	std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
}
