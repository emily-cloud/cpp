
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

bool is_int(std::string const &str);
bool is_float(std::string const &str);
bool is_double(std::string const &str);
bool is_char(std::string const &str);
void print_int(std::string const &literal);
void print_float(std::string const &literal);
void print_double(std::string const &literal);
void print_char(std::string const &literal);

#endif
