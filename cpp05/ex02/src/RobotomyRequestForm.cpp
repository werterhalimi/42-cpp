/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:56:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 01:42:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Default RobotomyRequestForm", 75, 45, "Default") {}
RobotomyRequestForm::~RobotomyRequestForm ( void ) {}
RobotomyRequestForm::RobotomyRequestForm( std::string const & name, std::string const & target ) 
	: Form(name, 75, 45, target)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}

void RobotomyRequestForm::execute_action( Bureaucrat const & b )
{
	if (this->getGradeToExec() < b.getGrade())
		throw new Form::GradeTooLowException();
	if (std::rand() < RAND_MAX / 2)
		std::cout << this->getTarget() << " robotomisification went well" << std::endl;
	else
		std::cout << this->getTarget() << " robotomisification went wrong" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( Form const & src) : 
	Form(src.getName(), src.getGradeToSign(), src.getGradeToExec(),src.getTarget())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
