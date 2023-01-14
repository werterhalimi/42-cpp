/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:04:45 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 00:15:59 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap (void) : ClapTrap("Jerem", 100, 50, 20) { std::cout << "Default ScavTrap constructor" << std::endl;}
		void guardGate( void ) { std::cout << this->getName() << " has entered GATE KEEPER MODE" << std::endl;}
};
#endif
