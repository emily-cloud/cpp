/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:11:29 by hai               #+#    #+#             */
/*   Updated: 2025/02/10 12:14:28 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y)
{
	this->x = x;
	this->y = y;
}

Point::Point( const Point &src )
{
	*this = src;
}
Point &Point::operator=( const Point &src )
{
	if (this != &src)
	{
		this->x = src.x;
		this->y = src.y;
	}
	return *this;
}
