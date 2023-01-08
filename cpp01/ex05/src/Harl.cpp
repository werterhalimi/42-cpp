/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 04:17:28 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 04:34:28 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level )
{
	std::string level_names[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	void (Harl::*level_funcs[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
		if (level_names[i] == level)
		{
			(this->*level_funcs[i])();
			return ;
		}
	std::cout << "Je deteste ce " << level << std::endl;
}

void Harl::debug( void ) 
{
	std::cout << "Je suis le debug, bonjour" << std::endl;
}
void Harl::info( void ) 
{
	std::cout << "Je suis le info, bonjour" << std::endl;
}
void Harl::warning( void ) 
{
	std::cout << "Je suis le warning, bonjour" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Je suis le error, bonjour" << std::endl;
}
