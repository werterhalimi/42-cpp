/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:42:54 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/27 22:08:51 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool contains(std::string str, char c)
{
	return str.find(c) != std::string::npos;
}

int	getPrecision(std::string d)
{
	if (!contains(d, '.'))
		return 0;
	int	i = d.find('.') + 1;
	int	ret = 0;
	while (d[i] && d[i] != 'f')
	{
		i++;
		ret++;
	}
	return ret;
}

std::string dtos(double d, int precision)
{
	std::ostringstream stream;
	stream << std::fixed;
	stream << std::setprecision(precision);
	stream << d;
	std::string str = stream.str();
	return (str);
}

std::string ftos(float d, int precision)
{
	std::ostringstream stream;
	stream << std::fixed;
	stream << std::setprecision(precision);
	stream << d;
	std::string str = stream.str();
	return (str);
}

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
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.') return false;
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
	std::string arg = argv[1];
	if (arg == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return 0;
	}

	if (arg == "+inff" || arg == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: " << arg.substr(0, 4) << std::endl;
		return 0;
	}

	if (arg == "+inf" || arg == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << 'f'<< std::endl;
		std::cout << "double: " << arg << std::endl;
		return 0;
	}

	if (getPrecision(arg) == 0)
	{
		if (arg[0] >= '0' && arg[0] <= '9')
		{
			int c = stoi(arg);	
			if(std::isprint(c))	
				std::cout << "char: '" << static_cast<char>(c) << "'"  << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << c << std::endl;
			std::cout << "float: " << ftos(static_cast<float>(c), getPrecision(arg)) << ".0f" << std::endl;
			std::cout << "double: " << dtos(static_cast<double>(c), getPrecision(arg)) << ".0" << std::endl;
			return 0;
		}
		char c = arg[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << ftos(static_cast<float>(c), getPrecision(arg)) << 'f' << std::endl;
		std::cout << "double: " << dtos(static_cast<double>(c), getPrecision(arg)) << std::endl;
		return 0;
	}

	if (dtos(stod(arg), getPrecision(arg)) == arg)
	{
		double d = stod(arg);
		char c = static_cast<char>(d);
		if(std::isprint(c))	
			std::cout << "char: '" << c << "'"<< std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << ftos(static_cast<float>(d), getPrecision(arg)) << 'f' << std::endl;
		std::cout << "double: " << dtos(static_cast<double>(d), getPrecision(arg)) << std::endl;
		return 0;
	}

	if (dtos(stod(arg), getPrecision(arg)) + 'f' == arg)
	{
		float d = stof(arg);
		char c = static_cast<char>(d);
		if(std::isprint(c))	
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << ftos(static_cast<float>(d), getPrecision(arg)) << 'f' << std::endl;
		std::cout << "double: " << dtos(static_cast<double>(d), getPrecision(arg)) << std::endl;
		return 0;
	}
}
