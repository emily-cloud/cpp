/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:30:46 by hai               #+#    #+#             */
/*   Updated: 2025/02/10 12:01:04 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : rawBits(0)
{
}

Fixed::Fixed( const Fixed &src )
{
	//std::cout << "Copy constructor called" << std::endl;
	this->rawBits = src.getRawBits();
}
Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->rawBits = n << this->fractionalBits;
}
Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(n * (1 << this->fractionalBits));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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

Fixed Fixed::operator+( const Fixed &src )
{
	this->rawBits += src.getRawBits();
	return *this;
}

Fixed Fixed::operator-( const Fixed &src )
{
	this->rawBits -= src.getRawBits();
	return *this;
}

Fixed Fixed::operator*( const Fixed &src )
{
	this->rawBits = this->rawBits * src.getRawBits() / (1 << this->fractionalBits);
	return *this;
}

Fixed Fixed::operator/( const Fixed &src )
{
	this->rawBits = this->rawBits / src.getRawBits();
	return *this;
}

bool Fixed::operator>( const Fixed &src )
{
	if(this->rawBits > src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<( const Fixed &src )
{
	if(this->rawBits < src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=( const Fixed &src )
{
	if(this->rawBits >= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=( const Fixed &src )
{
	if(this->rawBits <= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==( const Fixed &src )
{
	if(this->rawBits == src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=( const Fixed &src )
{
	if(this->rawBits != src.getRawBits())
		return true;
	return false;
}

Fixed &Fixed::operator++( void ) // prefix
{
	this->rawBits++;
	return *this;
}

Fixed Fixed::operator++( int ) // postfix
{
	Fixed tmp(*this);// make a copy of the current object
	operator++(); // call the prefix operator, increment the current object
	return tmp;// return the copy which held the original value
}

Fixed &Fixed::operator--( void )//prefix
{
	this->rawBits--;
	return *this;
}

Fixed Fixed::operator--( int ) // postfix
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed Fixed::min(const Fixed a, const Fixed b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
Fixed &Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed Fixed::max(const Fixed a, const Fixed b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
