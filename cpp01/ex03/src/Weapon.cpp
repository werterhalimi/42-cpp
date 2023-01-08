/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:29 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:16:36 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
}

Weapon::~Weapon( void )
{

}

void Weapon::setType( std::string type )
{
	this->type = type;
}

std::string const &  Weapon::getType( void )
{
	return ( this->type );
}
