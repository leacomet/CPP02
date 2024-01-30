/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:11:14 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 18:43:43 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void){

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << a / Fixed(0.0f) << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;

	// const Fixed	nbr1(5);
	// const Fixed	nbr2(10);
	// Fixed	nbr4(100);
	// Fixed	nbr3;
	// Fixed	nbr5;
	// Fixed	nbr3(nbr1 + nbr2);

	// if (nbr3 != nbr2)
		// std::cout << "OUIIIIII" << std::endl;
	// nbr3 = nbr1 + nbr2 + nbr4;
	// nbr3.setRawBits(20);
	// nbr3 = nbr1 - nbr2;
	// nbr3 = Fixed(nbr1.toFloat()-nbr2.toFloat());
	// nbr3 = Fixed(-1.0f);
	// std::cout << "Between nbr1 = " << nbr1 << " and nbr2 = " << nbr2 << " :" << std::endl;
	// std::cout << "min = " << Fixed::max(nbr1, nbr2) << std::endl;
	// while (nbr3-- > -3)
		// std::cout << "testttt" << std::endl;
	// int a = nbr3.getRawBits();
	// int a = nbr1.toFloat() - nbr2.toFloat();
	// std::cout << "nbr1 = " << nbr1 << std::endl;
	// std::cout << "nbr2 = " << nbr2 << std::endl;
	// std::cout << "nbr4 = " << nbr4 << std::endl;
	// std::cout << "nbr3 = " << nbr3 << std::endl;
	// std::cout << "a = " << a << std::endl;

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
