/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:07:51 by hai               #+#    #+#             */
/*   Updated: 2025/02/07 17:47:00 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>

class Fixed
{
	public:
		Fixed();// default constructor
		Fixed( const Fixed &src );// copy constructor
		Fixed &operator=( const Fixed &src );// assignation operator
		~Fixed();// destructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int rawBits;
		static const int fractionalBits = 8;
};

#endif
