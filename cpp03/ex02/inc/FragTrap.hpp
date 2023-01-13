/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:25:29 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 00:27:30 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAPTRAP_HPP
# define FLAPTRAP_HPP
# include "ClapTrap.hpp"

class FlapTrap : public ClapTrap
{
	public:
		FlapTrap (void) : ClapTrap("Bastien", 100, 100, 30) { std::cout << "Default FlapTrap constructor" << std::endl;}
		void highFivesGuys( void ) { std::cout << this->getName() << " says: HIGH FIVE !" << std::endl;}
};
#endif
