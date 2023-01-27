/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:05:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/19 00:47:27 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

Intern::Intern(void){}
Intern::~Intern(void){}
Intern::Intern(Intern const & src){ (void) src; }

Form * Intern::makeForm(std::string form, std::string target) 
{
	std::string form_names[3] = 
	{
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	Form * (Intern::*form_funcs[3])(std::string , std::string ) =
	{
		&Intern::executeRobotomy,
		&Intern::executePresident,
		&Intern::executeShrubbery,
	};
	for (int i = 0; i < 3; i++)
		if (form_names[i] == form)
			return (this->*form_funcs[i])(form, target);
	std::cout << "This formulary doesn't exist: " << form << std::endl; 
	return 0;
}

Intern & Intern::operator=(Intern const & src)
{
	(void) src;
	return (*this);
}

Form * Intern::executeRobotomy(std::string  form, std::string  target) 
{
	return new RobotomyRequestForm(form, target);
}

Form * Intern::executePresident(std::string  form, std::string  target) 
{
	return new PresidentialPardonForm(form, target);
}


Form * Intern::executeShrubbery(std::string  form, std::string  target) 
{
	return new ShrubberyCreationForm(form, target);
}
