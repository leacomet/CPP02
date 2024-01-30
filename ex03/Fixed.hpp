/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 21:23:39 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class	Fixed {

public:

	Fixed(void);
	Fixed(const int init);
	Fixed(const float init);
	Fixed(Fixed const &src);
	~Fixed(void);

	int		getRawBits(void) const;
	void 	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed	&min(Fixed &rhs1, Fixed &rhs2);
	static Fixed	const &min(Fixed const &rhs1, Fixed const &rhs2);
	static Fixed	&max(Fixed &rhs1, Fixed &rhs2);
	static Fixed	const &max(Fixed const &rhs1, Fixed const &rhs2);

	Fixed	&operator=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs);
	bool	operator<(Fixed const &rhs);
	bool	operator>=(Fixed const &rhs);
	bool	operator<=(Fixed const &rhs);
	bool	operator==(Fixed const &rhs);
	bool	operator!=(Fixed const &rhs);
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

private:

	int			_value;
	const int	_fraction;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
