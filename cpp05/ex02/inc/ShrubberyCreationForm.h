/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:33:45 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:45:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "Form.h"
# include <iostream>

class  ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const & name, int const & grade_to_sign, int const & grade_to_exec, std::string const & target );
		ShrubberyCreationForm( Form const & target);


		Form operator=(Form const & src);
}
#endif
