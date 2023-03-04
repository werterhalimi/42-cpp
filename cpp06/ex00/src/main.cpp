/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:42:54 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/04 21:59:30 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool isValid(std::string arg)
{
	if (arg.length() == 1)
		return true;
	int i = 0;
	int pointCount = 0;

	if (arg == "nan") return true;
	if (arg == "+inf" || arg == "-inf") return true;
	if (arg == "+inff" || arg == "-inff") return true;
	while (i < (int) arg.length())
	{
		if (arg[i] == '.') pointCount++;
		if (arg[i] == '.' &&  i == 0) return false;
		if (arg[i] == '.' &&  pointCount == 2) return false;
		if (i == (int) (arg.length() - 1) && arg[i] == 'f') return true;
		if (((arg[i] < '0' || arg[i] > '9') && arg[i] != '.'))
		{
			if(i != 0 || arg[i] != '-')
				return false;
		}
		i++;
	}
	return true;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use ./pdn <litteral>" << std::endl;
		return 1;
	}
	if (!isValid(argv[1]))
	{
		std::cout << "Bad input" << std::endl;
		return 1;
	}
	while(argv[1][0] == '-' && argv[1][1] && argv[1][1] == '0' && argv[1][2] && argv[1][2] != '.' )
	{
		argv[1][1] = '-';
		argv[1] += 1;
	}		
	while(argv[1][0] == '0' && argv[1][1] && argv[1][1] != '.')
		argv[1] += 1;
	std::string arg = argv[1];
	ScalarConverter::convert(arg);
}
