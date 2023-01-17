/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:56:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:59:20 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm( void ) : name("Default"), is_signed(false), grade_to_sign(1), grade_to_exec(1) {}
Form::~Form ( void ) {}
PresidentialPardonForm::PresidentialPardonForm( std::string const & name, int const & grade_to_sign, int const &grade_to_exec ) 
	: name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
PresidentialPardonForm::PresidentialPardonForm( Form const & src) : name(src.getName()), is_signed(false), grade_to_sign(src.getGradeToSign()), grade_to_exec(src.getGradeToExec())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
