/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 23:14:44 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _fraction(8) {

	std::cout << "Default Constructor Called" << std::endl;
	return;
}

Fixed::Fixed(const int init) : _fraction(8){

	std::cout << "Int Constructor Called" << std::endl;
	this->_value = init << this->_fraction;
	return;
}

Fixed::Fixed(const float init) : _fraction(8){

	int		i = 0;
	float	temp = init;

	std::cout << "Float Constructor Called" << std::endl;
	while (i < this->_fraction)
	{
		temp *= 2;
		i++;
	}
	this->_value = temp + 0.5;
	return;
}

Fixed::Fixed(Fixed const &src) : _fraction(8) {

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void){

	std::cout << "Destructor Called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

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

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}
