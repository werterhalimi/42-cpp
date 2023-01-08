/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:31 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:36:37 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA( void )
{

}

void	HumanA::setWeapon( Weapon &weapon )
{
	this->weapon = weapon;
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
