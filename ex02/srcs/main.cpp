/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:02:43 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 14:07:55 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void)
{
	Fixed 		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	// Additional operator tests
	std::cout << "\n--- Comparison operators ---" << std::endl;
	std::cout << "a > b     : " << (a > b) << std::endl;
	std::cout << "a < b     : " << (a < b) << std::endl;
	std::cout << "a >= b    : " << (a >= b) << std::endl;
	std::cout << "a <= b    : " << (a <= b) << std::endl;
	std::cout << "a == b    : " << (a == b) << std::endl;
	std::cout << "a != b    : " << (a != b) << std::endl;

	std::cout << "\n--- Arithmetic operators ---" << std::endl;
	std::cout << "a + b     : " << (a + b) << std::endl;
	std::cout << "a - b     : " << (a - b) << std::endl;
	std::cout << "a * b     : " << (a * b) << std::endl;
	std::cout << "b / Fixed(2): " << (b / Fixed(2)) << std::endl;

	std::cout << "\n--- Decrement operators ---" << std::endl;
	std::cout << "--a       : " << --a << std::endl;
	std::cout << "a--       : " << a-- << std::endl;
	std::cout << "a         : " << a << std::endl;

	std::cout << "\n--- Fixed::min / Fixed::max ---" << std::endl;
	std::cout << "Fixed::min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "Fixed::max(a, b): " << Fixed::max(a, b) << std::endl;

	return 0;
}
