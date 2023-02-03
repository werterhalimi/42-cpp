/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:08:33 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/03 14:25:50 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

template <typename T>
void 	swap(T & a, T & b)
{
	T const	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &	max(T & a, T & b) 
{
	if (a <= b)
		return b;
	return a;
}

template <typename T>
T &	min(T & a, T & b)
{
	if (a >= b)
		return b;
	return a;
}

int	main(void)
{
	{
		int a = 12;
		int b = 11;
		int c = 11;

		std::cout << a << " " << b << std::endl;
		swap<int>(a, b);
		std::cout << a << " " << b << std::endl;

		std::cout << b << " " << c << std::endl;
		std::cout << "min:" << min<int>(b,c) << " / max: " << max<int>(b,c) << std::endl;

		std::cout << a << " " << c << std::endl;
		std::cout << "min:" << min<int>(a,c) << " / max: " << max<int>(a,c) << std::endl;
		int & m = max(a,c); 
		std::cout << "aPTR=" << &a << "cPtr=" << &c << std::endl <<  "maxPtr=" << &m << std::endl; 
	}
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;	
}
