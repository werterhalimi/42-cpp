/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:44 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:33:42 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA( std::string name, Weapon &weapon ) : weapon(weapon), name(name) {}
		~HumanA( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
	private :
		Weapon &weapon;
		std::string name;
};

#endif
