/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:22 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 16:00:05 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{


	ScavTrap st;
	st.guardGate();
	FragTrap ft;
	ft.highFivesGuys();
	std::cout << ft.getName() << std::endl;
}
