/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:04 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/13 18:12:24 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap ( std::string name, int hp, int energy, int damage );
		ClapTrap ( void ) : name("Benoit"), hp(10), energy(10), damage(1) { std::cout << "Default constructor called" << std::endl;}
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
	private:
		std::string	name;
		int		hp;
		int		energy;
		int		damage;

};
#endif
