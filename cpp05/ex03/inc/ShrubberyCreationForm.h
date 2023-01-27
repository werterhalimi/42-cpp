/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:33:45 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 01:23:01 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "Form.h"
# include <fstream>
# include <iostream>

class  ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const & name, std::string const & target );
		ShrubberyCreationForm( Form const & target);


		void		execute_action ( Bureaucrat const & executor );
		Form operator=(Form const & src);
};
#endif
