/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:27:55 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/03 15:01:46 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

template <typename T>
void	iter(T *array, unsigned int len, void (*f)(T & el))
{
	unsigned int	i = 0;
	while (i < len)
		f(array[i++]);
}

template <typename T>
void	increment(T & i)
{
	i++;
}


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
