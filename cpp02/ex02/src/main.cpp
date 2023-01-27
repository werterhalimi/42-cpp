/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:07:02 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 23:48:35 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

/*
int main( void ) {
	{
		Fixed a(12);
		Fixed b(6);

		std::cout << ++a << std::endl;
		std::cout << a << std::endl;

		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		std::cout << b++ << std::endl;
		std::cout << ++b << std::endl;

		std::cout << a * b << std::endl;
		std::cout << a / b << std::endl;
		std::cout << a + b << std::endl;
		std::cout << a - b << std::endl;

		std::cout << (a < b) << std::endl;
		std::cout << (a >= b) << std::endl;

		std::cout << (a == b) << std::endl;
		std::cout << (a != b) << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );
		a = Fixed( 1234.4321f );
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Fixed a(10);
		Fixed b(20);

		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;


	}
	{
		Fixed const a(10);
		Fixed const b(20);

		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;



	}
return 0;
}
*/
