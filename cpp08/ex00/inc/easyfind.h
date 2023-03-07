/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:17:45 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/07 15:36:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <algorithm>

template<typename T>
int	easyfind(T container, int element)
{
	int	res = *std::find(container.begin(), container.end(), element);
	if (res != element)
		throw std::invalid_argument(((std::string)"The following element is not in the containers"));
	return res;
}
#endif
