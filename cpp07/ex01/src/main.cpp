/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:27:55 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/05 20:53:22 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"


int	main(void)
{
	int	i[5] = {1, 2, 3, 4, 5};
	int j = 0;
	while (j < 5)
	{
		std::cout << i[j] << std::endl;
		j++;
	}
	iter<int>(i, 5, &increment<int>);
	j = 0;
	while (j < 5)
	{
		std::cout << i[j] << std::endl;
		j++;
	}

}
