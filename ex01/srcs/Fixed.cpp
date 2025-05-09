/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:11:35 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 15:14:08 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _place(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _place(value << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	float scaled = value * (1 << _fractionalBits);
	if (scaled >= 0)
		this->_place = static_cast<int>(scaled + 0.5f);
	if (scaled < 0)
		this->_place = static_cast<int>(scaled - 0.5f);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_place = other.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _place;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_place = raw;
}

int	Fixed::toInt() const
{
	return _place >> _fractionalBits;
}

float	Fixed::toFloat() const
{
	return static_cast<float>(this->getRawBits()) / (1 << this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
