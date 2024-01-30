/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:27:49 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 20:58:08 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _fraction(8) {

	(void)_fraction;
	std::cout << "Default Constructor Called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src) : _fraction(8) {

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void){

	std::cout << "Default Destructor Called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
