/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:22 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/13 17:50:18 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap cp;

	for(int i = 0; i<15;i++)
	{
		cp.attack("Arthur");
		cp.takeDamage(1);
	}

	ClapTrap cp1("Jeremy", 15, 15, 5);
	for(int i = 0; i<15;i++)
	{
		cp1.attack("Arthur");
		cp1.takeDamage(1);
	}

	ClapTrap cp2(cp1);
	std::cout << cp2.getName() << " is a copy of " << cp1.getName() << " they both have " << cp1.getHp() << " and " << cp2.getHp() << " HP points" << std::endl;

	cp = cp2;
	std::cout << cp.getName() << " is a copy of " << cp2.getName() << " they both have " << cp2.getHp() << " and " << cp.getHp() << " HP points" << std::endl;
}
