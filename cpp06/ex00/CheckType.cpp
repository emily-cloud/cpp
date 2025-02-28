

#include "ScalarConverter.hpp"

bool isChar(std::string const &str)
{
	if (str.length() != 1)
		return false;
	return true;
}

/*
Whole numbers: No fractional or decimal values.
Range: Typically, int can represent values from -2,147,483,648
to 2,147,483,647 on most systems (for 32-bit).
Size: Typically, an int occupies 4 bytes of memory on most systems.
Signed/Unsigned: By default, int is signed, meaning it can hold
both positive and negative values.
You can also use unsigned int to hold only non-negative numbers.*/

bool isInt(std::string const &str)
{
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
	return true;
}
/*
A valid floating-point literal must have:
    Contains at least one digit (0-9).
    May include one optional decimal point (.).
    May include an exponent (e or E) followed by an optional sign (+/-) and at least one digit.
    May start with an optional sign (+ or -).
    May end with f or F (C-style float suffix, optional).
    May be one of the special floating values: "inf", "nan", etc.
*/

bool isFloat(const std::string &str)
{
	if (str == "nanf" || str == "-nanf" || str == "inff" || str == "-inff" || str == "+inff" || str == "inff")
		return true;

	size_t i = 0;
	bool hasDot = false;
	bool hasDigit = false;
	bool hasExp = false;

	if (str[i] == '+' || str[i] == '-')
		i++;

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
			return (hasDigit && hasDot) || (hasDigit && hasExp);  // "123.45f" case
		else
			return false;
	}
	return (hasDigit && hasDot) || (hasDigit && hasExp); // Ensure there’s at least one digit & a decimal
}

/*
    Valid float cases (appending f or F):
        "123.45f", "12f", "0.0f", "5e2", "5.5.5" (invalid) — all valid floats.
    Valid double cases (no f or F):
        "-42.0", "3.14", "nan", "5.5", "5e2", "-3.1E-4", "1.23e+10", "123." — all valid doubles.

Special Cases for double:

    Scientific notation: Valid numbers like "5e2", "-3.1E-4", and "1.23e+10" are valid doubles because they follow the typical scientific format.
    Infinitesimal cases: "inf", "+inf", "-inf" are valid doubles in C++ (but not floats unless explicitly suffixed with f).
    Nan: "nan" is a double.
*/


bool isDouble(std::string const &str)
{
	if (str == "nan" || str == "-nan" || str == "inf" || str == "-inf" || str == "+inf" || str == "inf")
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


