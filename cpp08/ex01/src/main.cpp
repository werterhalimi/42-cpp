/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:26:52 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/08 12:35:22 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"
int	main (void)
{
	int	N = 10;
	std::vector<int>	v;
	Span				span(N);
	int	i = 0;
	while (i < N)
	{
		v.push_back(i);
		i++;
	}
	span.fillNumbers(v.begin(), v.end());
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}
/*
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}*/
