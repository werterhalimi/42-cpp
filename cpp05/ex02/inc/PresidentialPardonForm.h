/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:33:49 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:45:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "Form.h"
# include <iostream>

class  PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const & name, int const & grade_to_sign, int const & grade_to_exec, std::string const & target );
		PresidentialPardonForm( Form const & target);


		Form operator=(Form const & src);
}
#endif
