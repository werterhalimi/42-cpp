/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:08:43 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/28 19:45:00 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

uintptr_t serialize(Data * ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

int	main(void)
{
	Data d;
	d.data = 10;
	uintptr_t s = serialize(&d);
	Data * u = deserialize(s);
	std::cout << u->data << std::endl;
}
