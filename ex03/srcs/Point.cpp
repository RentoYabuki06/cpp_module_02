/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:36:18 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/04 11:40:25 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point()
	: _x(0)
	, _y(0)
{}

Point::Point(const float x, const float y)
	: _x(x)
	, _y(y)
{}

Point::Point(const Point& other)
	: _x(other._x)
	, _y(other._y)
{}

Point& Point::operator=(const Point& other)
{
	(void) other;
	std::cerr << "Assaignment operator is not allowed for const members." << std::endl;
	return *this;
}

Point::~Point()
{}

Fixed Point::getX() const { return this->_x; }

Fixed Point::getY() const { return this->_y; }
