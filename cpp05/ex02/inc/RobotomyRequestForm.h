/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:58:29 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:45:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "Form.h"
# include <iostream>

class  RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const & name, int const & grade_to_sign, int const & grade_to_exec, std::string const & target );
		RobotomyRequestForm( Form const & target);


		Form operator=(Form const & src);
}
#endif
