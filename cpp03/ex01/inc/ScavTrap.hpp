/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:04:45 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/13 18:12:05 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClavTrap
{
	public:
		ScavTrap (void) : name("Bernard"), hp(100), energy(50), damage(20) { std::cout << "Default ScavTrap constructor"}
};
		void guardGate( void ) { std::cout << this->getName() << " has entered GATE KEEPER MODE" << std::endl;}
#endif
