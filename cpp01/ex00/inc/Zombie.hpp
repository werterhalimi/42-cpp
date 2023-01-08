/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:43:47 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 21:05:39 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
	private:
		std::string name;

};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
