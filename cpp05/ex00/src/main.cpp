/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:38:18 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 23:10:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main(void)
{
	try
	{
		Bureaucrat b("Shai 0", 1);
		while (1)
		{
			b.decrement();
			std::cout << b << std::endl;
		}
	}
	catch(std::exception const *e)
	{
		std::cout << e->what() << std::endl;
	}
	
}
