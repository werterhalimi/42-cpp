/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:28:24 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/04 21:54:03 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "A new ScalarConverter was created" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	(void) src;
	std::cout << "A SclarConverter was copied" << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "A ScalarConverter was destroyed" << std::endl;
}

ScalarConverter ScalarConverter::operator=(ScalarConverter const & src)
{
	(void) src;
	std::cout << "Copy operator called" << std::endl;
	return *this;
}

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



void ScalarConverter::convert(std::string arg)
{
	if (arg == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}

	if (arg == "+inff" || arg == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: " << arg.substr(0, 4) << std::endl;
		return ;
	}

	if (arg == "+inf" || arg == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << 'f'<< std::endl;
		std::cout << "double: " << arg << std::endl;
		return ;
	}

	if (getPrecision(arg) == 0)
	{
		if ((arg[0] >= '0' && arg[0] <= '9') || (arg[0] == '-' && arg[1] >= '0' && arg[1] <= '9'))
		{
			try
			{
				int c = stoi(arg);	
				if(std::isprint(c))	
					std::cout << "char: '" << static_cast<char>(c) << "'"  << std::endl;
				else
					std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << c << std::endl;
				std::cout << "float: " << ftos(static_cast<float>(c), getPrecision(arg)) << ".0f" << std::endl;
				std::cout << "double: " << dtos(static_cast<double>(c), getPrecision(arg)) << ".0" << std::endl;
				return ;
			}
			catch(std::out_of_range & e)
			{
				std::cout << "Bad input" << std::endl;
				return ;
			}
		}
		char c = arg[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << ftos(static_cast<float>(c), getPrecision(arg)) << 'f' << std::endl;
		std::cout << "double: " << dtos(static_cast<double>(c), getPrecision(arg)) << std::endl;
		return ;
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
		return ;
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
		return ;
	}
	std::cout << "Bad input" << std::endl;
}
