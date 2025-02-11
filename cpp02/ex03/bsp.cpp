/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:14:32 by hai               #+#    #+#             */
/*   Updated: 2025/02/11 20:03:45 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	float areaABC = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	float areaPBC = (point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())) / 2;
	float areaPAC = (a.getX() * (point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY())) / 2;
	float areaPAB = (a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY())) / 2;

	if(areaABC < 0)
		areaABC *= -1;
	if(areaPBC < 0)
		areaPBC *= -1;
	if(areaPAC < 0)
		areaPAC *= -1;
	if(areaPAB < 0)
		areaPAB *= -1;

	if (areaABC == 0 || areaPBC == 0 || areaPAC == 0 || areaPAB == 0)
		return false;
	if (areaABC == (areaPBC + areaPAC + areaPAB))
		return true;
	return false;
}
