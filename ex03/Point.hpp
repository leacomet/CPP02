/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:48:54 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 22:14:07 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include <string>
#include "Fixed.hpp"

class	Point {

public:

	Point(void);
	Point(const float init_x, const float init_y);
	Point(const Point &src);
	~Point(void);

	const Fixed	get_x(void) const;
	const Fixed	get_y(void) const;

	// Point	&operator=(const Point &rhs);


private:

	const Fixed	_x;
	const Fixed _y;

};

// std::ostream	&operator<<(std::ostream &o, Point const &rhs);

#endif
