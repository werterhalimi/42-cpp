/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:46 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:40:59 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public :
		HumanB( std::string name ) : name(name) {}
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon );
	private :
		Weapon *weapon;
		std::string name;
};

#endif
