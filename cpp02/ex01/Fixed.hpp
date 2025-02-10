/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:07:51 by hai               #+#    #+#             */
/*   Updated: 2025/02/10 08:56:12 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{
	public:
		Fixed();// default constructor
		Fixed(const int n);
		Fixed(const float n);
		Fixed( const Fixed &src );// copy constructor
		Fixed &operator=( const Fixed &src );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();// destructor
		int getRawBits( void ) const;

	private:
		int rawBits;
		static const int fractionalBits = 8;
};

std::ostream &operator<<( std::ostream &o, Fixed const &i );

#endif

