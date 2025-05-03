/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:11:35 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 14:54:53 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_place = 0;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_place = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	float scaled = value * (1 << _fractionalBits);
	if (scaled >= 0)
		this->_place = static_cast<int>(scaled + 0.5f);
	if (scaled < 0)
		this->_place = static_cast<int>(scaled - 0.5f);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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

bool Fixed::operator>(const Fixed& rhs) const
{
	return this->_place > rhs._place;
}

// Comparison Operators
bool Fixed::operator<(const Fixed& rhs) const
{
	return this->_place < rhs._place;
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return this->_place >= rhs._place;
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return this->_place <= rhs._place;
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return this->_place == rhs._place;
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return this->_place != rhs._place;
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits(this->_place + rhs._place);
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed result;
    result.setRawBits(this->_place - rhs._place);
    return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed result;
    // fixed-point multiplication: (a * b) >> fractional_bits
    result.setRawBits((this->_place * rhs._place) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    Fixed result;
    // fixed-point division: (a << fractional_bits) / b
    result.setRawBits((this->_place << _fractionalBits) / rhs._place);
    return result;
}

// Increment and Decrement Operators 
Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

// Static min/max Functions 
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a._place < b._place)
		return a;
	else 
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._place < b._place)
		return a;
	else 
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a._place > b._place)
		return a;
	else 
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._place > b._place)
		return a;
	else 
		return b;
}
