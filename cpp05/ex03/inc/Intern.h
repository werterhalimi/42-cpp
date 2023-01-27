/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:05:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/19 00:47:12 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include "Form.h"
# include "PresidentialPardonForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & src);
		Form * makeForm(std::string form, std::string target) ;
	private:
		Form	* executeRobotomy(std::string  name, std::string  target) ;
		Form	* executePresident(std::string  name, std::string  target);
		Form	* executeShrubbery(std::string  name, std::string  target) ;
};
#endif
