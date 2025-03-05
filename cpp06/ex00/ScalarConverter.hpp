
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
		static int typeCheck(std::string const &literal);

	public:
		static void	convert(std::string const &literal );
		class InvalidInputException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
