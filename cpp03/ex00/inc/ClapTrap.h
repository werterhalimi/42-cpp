/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:04 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/12 21:13:52 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap ( std::string name, int hp, int energy, int damage );
		ClapTrap ( void ) { std::cout << "Default constructor called" << std::endl;}
		ClapTrap ( const ClapTrap  & src );
		~ClapTrap ( void );
		
		void attack (const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap operator=(const ClapTrap & src);
	private:
		std::string	name;
		int		hp;
		int		energy;
		int		damage;

};
#endif
