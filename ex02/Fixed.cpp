/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 18:47:30 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*		CONSTRUCTOR		*/

Fixed::Fixed(void) : _value(0), _fraction(8) {

	return;
}

Fixed::Fixed(const int init) : _fraction(8){

	this->_value = init << this->_fraction;
	return;
}

Fixed::Fixed(const float init) : _fraction(8){

	int		i = 0;
	float	temp = init;

	while (i < this->_fraction)
	{
		temp *= 2;
		i++;
	}
	if (init < 0)
		temp -= 1;
	this->_value = temp + 0.5;
	return;
}

Fixed::Fixed(Fixed const &src) : _fraction(8) {

	*this = src;
	return;
}

Fixed::~Fixed(void){

	return;
}


/*		OPERATOR OVERLOAD		*/

Fixed	&Fixed::operator=(const Fixed &rhs) {

	this->_value = rhs.getRawBits();
	return (*this);
}

/*	OPERATOR comparison	*/
bool	Fixed::operator<(const Fixed &rhs) {

	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) {

	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) {

	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) {

	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) {

	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) {

	return (this->_value != rhs.getRawBits());
}

/*	OPERATOR arithmetic	*/
Fixed	Fixed::operator+(Fixed const &rhs) {

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) {

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) {

	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) {

	if (rhs.getRawBits() == 0)
	{
		std::cout << "can't divide by 0" << std::endl;
		return (0);
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

/*	OPERATOR post-pre in-de crementation */
Fixed	&Fixed::operator++() {

	this->_value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	temp(*this);
	this->_value += 1;
	return (temp);
}

Fixed	&Fixed::operator--() {

	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	temp(*this);
	this->_value -= 1;
	return (temp);
}

/*		FUNCTIONS		*/

int	Fixed::getRawBits(void) const {

	return this->_value;
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
}


float	Fixed::toFloat(void) const {

	float	temp = this->_value;
	int		i = 0;

	while (i < this->_fraction)
	{
		temp /= 2;
		i++;
	}
	return (temp);
}

int		Fixed::toInt(void) const {

	return (this->_value >> 8);
}

Fixed	&Fixed::min(Fixed &rhs1, Fixed &rhs2) {

	if (rhs1 <= rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed	const &Fixed::min(Fixed const &rhs1, Fixed const &rhs2) {

	if ((Fixed)rhs1 <= (Fixed)rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed	&Fixed::max(Fixed &rhs1, Fixed &rhs2) {

	if ((Fixed)rhs1 >= (Fixed)rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed	const &Fixed::max(Fixed const &rhs1, Fixed const &rhs2) {

	if (&rhs1 < &rhs2)
		return (rhs1);
	else
		return (rhs2);
}

/*		OPERATOR REDIRECTION	*/
std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}
