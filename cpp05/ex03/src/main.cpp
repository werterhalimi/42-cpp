/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:38:18 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/23 14:43:52 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int	main(void)
{
	Intern i;
	Form* f= i.makeForm("robotomy request", "Test");
	Bureaucrat b("Shai", 150);
	b.executeForm(*f);
	delete f;
	/*
	{
		Bureaucrat b("Shai", 1);
		ShrubberyCreationForm f("ShrubberyCreationForm 0", "test");
		b.executeForm(f);
	}
	{
		Bureaucrat b("Shai", 1);
		PresidentialPardonForm f("ShrubberyCreationForm 0", "test");
		b.executeForm(f);
	}
	{
		Bureaucrat b("Shai", 1);
		RobotomyRequestForm f("ShrubberyCreationForm 0", "test");
		b.executeForm(f);
	}
	{
		Bureaucrat b("Shai", 150);
		ShrubberyCreationForm f("ShrubberyCreationForm 0", "test");
		b.executeForm(f);
	}
*/
}
