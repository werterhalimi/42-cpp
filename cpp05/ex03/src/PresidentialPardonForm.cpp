/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:56:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 01:42:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Default PresidentialPardonForm", 25, 5, "Default") {}
PresidentialPardonForm::~PresidentialPardonForm ( void ) {}
PresidentialPardonForm::PresidentialPardonForm( std::string const & name, std::string const & target ) 
	: Form(name, 25, 5, target)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}


PresidentialPardonForm::PresidentialPardonForm( Form const & src) : 
	Form(src.getName(), src.getGradeToSign(), src.getGradeToExec(),src.getTarget())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}

void PresidentialPardonForm::execute_action( Bureaucrat const & b )
{
	if (this->getGradeToExec() < b.getGrade())
		throw new Form::GradeTooLowException();
	std::cout << this->getTarget() << " is pardonned by Zaphod Beeblebrox" << std::endl;
}
