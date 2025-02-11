/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:07:59 by hai               #+#    #+#             */
/*   Updated: 2025/02/11 20:00:08 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point( const Point &src );
		float getX() const;
		float getY() const;
		Point &operator=( const Point &src );
		~Point();

	private:
		float x;
		float y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
