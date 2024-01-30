/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:46 by acomet            #+#    #+#             */
/*   Updated: 2024/01/26 20:33:42 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	int		getRawBits(void) const;
	void 	setRawBits(int const raw);

	Fixed	&operator=(Fixed const & rhs);

private:

	int			_value;
	const int	_fraction;

};

#endif
