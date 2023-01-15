/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:04 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 21:07:16 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap ( std::string name, int hp, int energy, int damage );
		ClapTrap ( void );
		ClapTrap ( const ClapTrap  & src );
		~ClapTrap ( void );
		
		void attack (const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName( void ) const;
		int		getHp( void ) const;
		int		getEnergy( void ) const;
		int		getDamage( void ) const;

		ClapTrap & operator=(const ClapTrap & src);
	protected:
		std::string	name;
		int		hp;
		int		energy;
		int		damage;

};
#endif
