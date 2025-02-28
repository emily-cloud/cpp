
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <exception>
#include <stdexcept>
#include <cctype>


/*bool isFloat(const std::string &str)
{
	if (str.empty()) return false;

	if (str == "nanf" || str == "inff" || str == "-inff" || str == "+inff" || str == "inff")
		return true;
	size_t i = 0;
	bool hasDot = false;
	bool hasDigit = false;
	bool hasExp = false;

	if (str[i] == '+' || str[i] == '-') i++;

	for (; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != 'F' && str[i] != 'e' && str[i] != 'E')
			return false;
		else if (isdigit(str[i]))
			hasDigit = true;
		else if (str[i] == '.' && !hasDot)
			hasDot = true;
		else if ((str[i] == 'e' || str[i] == 'E') && i > 0 && !hasExp && isdigit(str[i - 1]) && i < str.length() - 1 && (isdigit(str[i + 1]) || str[i + 1] == '+' || str[i + 1] == '-'))
		{
			hasExp = true;
			hasDigit = false;
			if ((str[i + 1] == '+' || str[i + 1] == '-'))
			{
				i++;
				if (i + 1 >= str.length() || !isdigit(str[i + 1]))
					return false;
			}
			else
			{
				if (isdigit(str[i + 1]) )
					hasDigit = true;
				else if (i + 1 >= str.length() || !isdigit(str[i + 1]))
					return false;
			}
		}
		else if ((str[i] == 'f'  || str[i] == 'F') && i == str.length() - 1 && hasDigit)
			return hasDigit;  // "123.45f" case
		else
			return false;
	}
	return (hasDigit && hasDot) || (hasDigit && hasExp); // Ensure there’s at least one digit & a decimal
}

bool isDouble(std::string const &str)
{
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf" || str == "inf")
		return true;

	if(isFloat(str))
	{
		if (str.find('f') != std::string::npos || str.find('F') != std::string::npos)
			return false;
		else
			return true;
	}
	return false;
}

// Example usage
int main() {
   std::string testCases[] = {
        "123.45f", "-42.0", "3.14", "nan", "inf", "+inf", "-inf", "123.","nanf", "inff", "+inff", "-inff",
        ".5", "5.", "f", "abc", "12f", "5.5.5", ".", ".f", "0.0f",
        "5e2", "-3.1E-4", "1.23e+10", "4.56e-3f", "3.14E", "2e", "2e-", "e10", "2.3e4.5"
    };


	for (const auto &s : testCases) {
		std::cout << "\"" << s << "\" is " << (isDouble(s) ? "a valid double" : "not a double") << std::endl;
	}
	std::cout << std::endl;
	for (const auto &s : testCases) {
		std::cout << "\"" << s << "\" is " << (isFloat(s) ? "a valid float" : "not a float") << std::endl;
	}

    return 0;
}


bool isInt(std::string const &str)
{
	if (str.empty()) return false;

	if (str.length() == 1 && !isdigit(str[0]))
		return false;

	size_t i = 0;
	if (str.length() > 1 && (str[0] == '-' || str[0] == '+'))
		i++;

	for (; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}

	try
	{
		std::stoi(str);
	}
	catch (const std::exception &e)
	{
		return false;
	}

	return true;
}
/*
int main() {
   std::string testCases[] = {
        "123", "-42.0", "--3", "nan", "inf", "+inf", "-inf", "123.",
        ".5", "5.", "f", "abc", "12f", "5.5.5", ".", ".f", "0.0f",
        "5e2", "-3.1E-4", "2147483649", "4.56e-3f", "3.14E", "2e", "2e-", "e10", "2.3e4.5"
    };


	for (const auto &s : testCases) {
		std::cout << "\"" << s << "\" is " << (isInt(s) ? "a valid int" : "not a int") << std::endl;
	}

    return 0;
}
*/

#include <iostream>
#include <sstream>
#include <cstdlib>  // for atof
#include <string>

void convertFloat(std::string const &literal)
{
    // Handle special float values
    if (literal == "nanf" || literal == "inff" || literal == "-inff" || literal == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl; // Remove 'f'
        return;
    }

    // Check if the original string contains 'e' (scientific notation)
    bool isScientific = (literal.find('e') != std::string::npos || literal.find('E') != std::string::npos);

    // Convert to float
    float f = std::atof(literal.c_str());

    // Convert float to string
    std::ostringstream oss;
    oss << f;
    std::string floatStr = oss.str();

    // Ensure `.0` is only added if necessary
    if (!isScientific && floatStr.find('.') == std::string::npos)
    {
        floatStr += ".0";
    }

    // Output results
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << floatStr << "f" << std::endl;
    std::cout << "double: " << floatStr << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    convertFloat(argv[1]);
    return 0;
}
