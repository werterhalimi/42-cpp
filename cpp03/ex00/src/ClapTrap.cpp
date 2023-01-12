/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:25 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/12 21:13:46 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

Clatrap::ClapTrap( std::string name, int hp, int energy, int damage )
	: name( name ), hp ( hp ), energy ( energy ), damage ( damage )
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

Clatrap::ClapTrap( std::string name, int hp, int energy, int damage )
	: name( name ), hp ( hp ), energy ( energy ), damage ( damage )
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}
