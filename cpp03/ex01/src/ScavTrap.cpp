/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:08:20 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 21:12:34 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void) : ClapTrap("Jerem", 100, 50, 30)
{
	std::cout << "Default ScavTrap constructor" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Default ScavTrap destructor" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << this->getName() << " has entered GATE KEEPER MODE" <<std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src ) 
{
	std::cout << "ScavTrap Custom operator has been called" << std::endl;
	this->name = src.getName();
	this->hp = src.getHp();
	this->energy = src.getEnergy();
	this->damage = src.getDamage();
	return *this;
}
