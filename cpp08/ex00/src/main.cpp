/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:17:49 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/07 15:37:41 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <vector>

int	main(void)
{
	std::vector<int>	list;
	int					i;

	i = 0;
	while (i < 5)
		list.push_back(i++);

	try
	{
		easyfind<std::vector<int> >(list, 3);
		std::cout << 3 << " is in the container !" << std::endl;
		easyfind<std::vector<int> >(list, 6);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
