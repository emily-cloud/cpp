
#ifndef  SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

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


class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & src);

	public:
		static void	convert(std::string const &literal );
		class InvalidInputException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

bool isChar(std::string const &str);
bool isInt(std::string const &str);
bool isFloat(std::string const &str);
bool isDouble(std::string const &str);
void convertChar(std::string const &literal);
void convertInt(std::string const &literal);
void convertFloat(std::string const &literal);
void convertDouble(std::string const &literal);

#endif
