/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:24:43 by hai               #+#    #+#             */
/*   Updated: 2025/02/10 11:51:59 by hai              ###   ########.fr       */
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
		Fixed operator+( const Fixed &src );
		Fixed operator-( const Fixed &src );
		Fixed operator*( const Fixed &src );
		Fixed operator/( const Fixed &src );
		bool operator>( const Fixed &src );
		bool operator<( const Fixed &src );
		bool operator>=( const Fixed &src );
		bool operator<=( const Fixed &src );
		bool operator==( const Fixed &src );
		bool operator!=( const Fixed &src );
		Fixed &operator++( void );
		Fixed operator++( int );
		Fixed &operator--( void );
		Fixed operator--( int );
		static Fixed &min( Fixed &a, Fixed &b );
		static Fixed min(const Fixed a, const Fixed b);
		static Fixed &max( Fixed &a, Fixed &b );
		static Fixed max(const Fixed a, const Fixed b);

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
