/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:58:29 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 01:23:01 by shalimi          ###   ########.fr       */
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
		RobotomyRequestForm( std::string const & name, std::string const & target );
		RobotomyRequestForm( Form const & target);


		void		execute_action ( Bureaucrat const & executor );
		Form operator=(Form const & src);
};
#endif
