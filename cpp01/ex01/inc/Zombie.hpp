/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:43:47 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 22:31:06 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name( std::string name );
	private:
		std::string name;

};


Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif
