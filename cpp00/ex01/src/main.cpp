/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:11:10 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 20:06:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Phonebook phonebook;
	while (1)
	{
		std::cout << "Les pages jaunes>";
		std::string buff;
		std::getline(std::cin, buff);
		if (buff == "EXIT")
			break;
		if (buff == "ADD")
			phonebook.add_contact();
		if (buff == "SEARCH")
			phonebook.search();

	}
}
