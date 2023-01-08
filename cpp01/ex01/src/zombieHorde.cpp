/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:34:47 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 22:31:29 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ret = new Zombie[N] ;
	for(int i = 0 ; i < N ; i++)
	{
		ret[i].set_name(name);
	}
	return (ret);
}
