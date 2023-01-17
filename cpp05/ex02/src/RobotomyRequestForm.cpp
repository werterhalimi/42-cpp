/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:56:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:58:32 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm( void ) : name("Default"), is_signed(false), grade_to_sign(1), grade_to_exec(1) {}
Form::~Form ( void ) {}
RobotomyRequestForm::RobotomyRequestForm( std::string const & name, int const & grade_to_sign, int const &grade_to_exec ) 
	: name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
RobotomyRequestForm::RobotomyRequestForm( Form const & src) : name(src.getName()), is_signed(false), grade_to_sign(src.getGradeToSign()), grade_to_exec(src.getGradeToExec())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
