/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:56:53 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/04 11:45:02 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <cmath>

float cal_area_Heron(Point const &a, Point const &b, Point const &c)
{
	float line_ab = std::sqrt(std::pow((a.getX().toFloat() - b.getX().toFloat()), 2) + std::pow((a.getY().toFloat() - b.getY().toFloat()), 2));
	float line_bc = std::sqrt(std::pow((b.getX().toFloat() - c.getX().toFloat()), 2) + std::pow((b.getY().toFloat() - c.getY().toFloat()), 2));
	float line_ca = std::sqrt(std::pow((c.getX().toFloat() - a.getX().toFloat()), 2) + std::pow((c.getY().toFloat() - a.getY().toFloat()), 2));
	float semiperimeter = (line_ab + line_bc + line_ca ) / 2.0f;
	return std::sqrt(semiperimeter * (semiperimeter - line_ab) * (semiperimeter - line_bc) * (semiperimeter - line_ca));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float total_area = cal_area_Heron(a, b, c);
	float area1 = cal_area_Heron(a, b, point);
	float area2 = cal_area_Heron(b, c, point);
	float area3 = cal_area_Heron(c, a, point);

	if (area1 == 0.0f || area2 == 0.0f || area3 == 0.0f)
		return false;

	return std::fabs(total_area - (area1 + area2 + area3)) < 0.0001f;
}
