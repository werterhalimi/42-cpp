/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:38:18 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 00:02:20 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main(void)
{
	{
		Bureaucrat b("Shai 0", 150);
		Form form("Form 0", 5, 5);
		b.signForm(form);
	}
	{
		Bureaucrat b("Shai 1", 5);
		Form form("Form 1", 5, 5);
		b.signForm(form);
	}

	try
	{
		Bureaucrat b("Shai 2", 100);
		Form form("Form 2", 5, 235);
		b.signForm(form);
	}
	catch(std::exception const *e)
	{
		std::cout << e->what() << std::endl;
	}
	
}
