/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:56:31 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 01:43:31 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Default ShrubberyCreationForm", 145, 137, "Default") {}
ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string const & name, std::string const & target ) 
	: Form(name, 145, 137, target)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}

void ShrubberyCreationForm::execute_action( Bureaucrat const & b )
{
	if (this->getGradeToExec() < b.getGrade())
		throw new Form::GradeTooLowException();
	std::ofstream ofs(this->getTarget());
	ofs << "0000000" << std::endl << "000000000" << std::endl << "0000000" << std::endl << "   ||" <<std::endl;
	ofs << "   ||" <<std::endl << "   ||" <<std::endl << "   ||" <<std::endl;
	ofs.close();
}

ShrubberyCreationForm::ShrubberyCreationForm( Form const & src) : 
	Form(src.getName(), src.getGradeToSign(), src.getGradeToExec(),src.getTarget())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
