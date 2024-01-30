/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:53:18 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 21:26:52 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*		Constructor / Destructor	*/
Point::Point(void) : _x(0), _y(0) {

	return;
}

Point::Point(const float init_x, const float init_y) : _x(init_x), _y(init_y) {

	return;
}

// Point::Point(const Point &src) {
// 
	// *this = src;
	// return;
// }

Point::~Point(void) {

	return;
}


/*		Functions	*/
const Fixed	Point::get_x(void) const {

	return (this->_x);
}

const Fixed	Point::get_y(void) const {

	return (this->_y);
}





/*		OPERATOR OVERLORD	*/
// Point	&Point::operator=(const Point &rhs) {
// 
	// Fixed	x = rhs.get_x();
	// Fixed	y = rhs.get_y();
	// Point	temp(x.toFloat(), y.toFloat());
// 
	// *this = temp;
	// this->_x = x;
// 
// 
	// return (this);
// }

// std::ostream	&operator<<(std::ostream &o, Point const &rhs) {
// 
	// o << rhs.toFloat();
	// return (o);
// }
