/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:33 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:40:23 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB( void ) 
{

}


void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}


void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
