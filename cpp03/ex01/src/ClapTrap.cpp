/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:25 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 21:09:26 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): name("Benoit"), hp(10), energy(10), damage(1)
{
	std::cout << "Default Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hp, int energy, int damage )
	: name( name ), hp ( hp ), energy ( energy ), damage ( damage )
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
	: name( src.getName() ), hp ( src.getHp() ), energy ( src.getEnergy() ), damage ( src.getDamage() )
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void ) 
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack (const std::string & target)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is dead so he can't attack" << std::endl;
		return ;
	}
	if (this->energy == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " doesn't have energy anymore so he can't attack" << std::endl;
		return ;
	}
	this->energy--;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage();
	std::cout << " points of damage" << std::endl;
}


void	ClapTrap::takeDamage (unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is dead so he can't take damage" << std::endl;
		return ;
	}
	this->hp -= amount;
	std::cout << "ClapTrap " << this->getName() << " took damage, his hp is:" << this->getHp() << std::endl;
}



void	ClapTrap::beRepaired (unsigned int amount)
{
	if (this->energy == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " doesn't have energy anymore so he can't attack" << std::endl;
	}
	this->hp+= amount;
	std::cout << "ClapTrap " << this->getName() << " took damage, his hp is:" << this->getHp() << std::endl;
}




std::string ClapTrap::getName ( void ) const
{
	return this->name;
}

int ClapTrap::getHp ( void ) const
{
	return this->hp;
}

int ClapTrap::getEnergy ( void ) const
{
	return this->energy;
}

int ClapTrap::getDamage ( void ) const
{
	return this->damage;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src ) 
{
	std::cout << "Custom operator has been called" << std::endl;
	this->name = src.getName();
	this->hp = src.getHp();
	this->energy = src.getEnergy();
	this->damage = src.getDamage();
	return *this;
}
