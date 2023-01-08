/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:48:55 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 22:30:51 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
}

void Zombie::set_name( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " a ete deconstrui" << std::endl;
}
