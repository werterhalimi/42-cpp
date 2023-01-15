/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:08:20 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 21:20:40 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( void) : ClapTrap("Jerem", 100, 50, 30)
{
	std::cout << "Default FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Default FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << this->getName() << " says: HIGH FIVE !" <<std::endl;
}


FragTrap & FragTrap::operator=( FragTrap const & src ) 
{
	std::cout << "FragTrap Custom operator has been called" << std::endl;
	this->name = src.getName();
	this->hp = src.getHp();
	this->energy = src.getEnergy();
	this->damage = src.getDamage();
	return *this;
}
