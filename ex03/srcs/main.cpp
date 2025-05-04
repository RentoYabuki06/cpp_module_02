/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:02:43 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/04 11:48:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Point.hpp"

// Declare the bsp function
bool bsp(Point const a, Point const b, Point const c, Point const point);

// A helper function to test whether a point is inside the triangle
void test(Point const& a, Point const& b, Point const& c, Point const& p, std::string label) {
	std::cout << label << ": ";
	if (bsp(a, b, c, p) == true)
		std::cout << "Inside the triangle ✅" << std::endl;
	else
		std::cout << "Outside the triangle ❌" << std::endl;
}

int main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);

	// Test cases
	Point inside1(5, 5);          // clearly inside
	Point inside2(4.9f, 4.9f);    // close to edge, still inside
	Point center(5, 3.3f);        // near centroid
	Point edge1(5, 0);            // on edge AB
	Point edge2(7.5f, 5);         // on edge BC
	Point edge3(2.5f, 5);         // on edge CA
	Point vertex1(0, 0);          // vertex A
	Point vertex2(10, 0);         // vertex B
	Point vertex3(5, 10);         // vertex C
	Point outside1(-1, -1);       // outside left
	Point outside2(11, 1);        // outside right
	Point outside3(5, 11);        // above triangle
	Point outside4(5, -1);        // below triangle
	Point nearButOutside(0.1f, 0.3f); // very close to edge but outside
	Point edgeInside(0.1f, 0.1f); // very close to edge, inside

	// Run tests
	test(a, b, c, inside1,        "Test 1: Clearly inside");
	test(a, b, c, inside2,        "Test 2: Near edge, inside");
	test(a, b, c, center,         "Test 3: Near center");
	test(a, b, c, edge1,          "Test 4: On edge AB");
	test(a, b, c, edge2,          "Test 5: On edge BC");
	test(a, b, c, edge3,          "Test 6: On edge CA");
	test(a, b, c, vertex1,        "Test 7: On vertex A");
	test(a, b, c, vertex2,        "Test 8: On vertex B");
	test(a, b, c, vertex3,        "Test 9: On vertex C");
	test(a, b, c, outside1,       "Test 10: Far outside (bottom-left)");
	test(a, b, c, outside2,       "Test 11: Far outside (bottom-right)");
	test(a, b, c, outside3,       "Test 12: Far outside (top)");
	test(a, b, c, outside4,       "Test 13: Far outside (below)");
	test(a, b, c, nearButOutside, "Test 14: Very close to edge but outside");
	test(a, b, c, edgeInside, "Test 15: Very close to edge, inside");

	return 0;
}
