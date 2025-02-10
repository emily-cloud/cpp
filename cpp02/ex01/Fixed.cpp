/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:30:43 by hai               #+#    #+#             */
/*   Updated: 2025/02/10 08:55:21 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
}

Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = src.getRawBits();
}
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = n << this->fractionalBits;
}
Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(n * (1 << this->fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &src )
{
	if (this != &src)
		this->rawBits = src.getRawBits();
	return *this;
}


float Fixed::toFloat( void ) const
{
	return (float)this->rawBits / (1 << this->fractionalBits);
}

int Fixed::toInt( void ) const
{
	return this->rawBits >> this->fractionalBits;
}

std::ostream &operator<<( std::ostream &o, Fixed const &i  )
{
	o << i.toFloat();
	return o;
}

int Fixed::getRawBits() const
{
	return this->rawBits;
}

