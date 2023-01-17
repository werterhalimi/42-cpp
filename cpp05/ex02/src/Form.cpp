/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:23:44 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/17 22:41:43 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

const char * Form::GradeTooHighException::what () const  throw()
{
	return ("Grade is too high");
}
const char* Form::GradeTooLowException::what() const throw() 
{
	return ("Grade is too low");
}

Form::Form( void ) : name("Default"), is_signed(false), grade_to_sign(1), grade_to_exec(1) {}
Form::~Form ( void ) {}
Form::Form( std::string const & name, int const & grade_to_sign, int const &grade_to_exec ) 
	: name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}
Form::Form( Form const & src) : name(src.getName()), is_signed(false), grade_to_sign(src.getGradeToSign()), grade_to_exec(src.getGradeToExec())
{
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw new Form::GradeTooLowException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw new Form::GradeTooHighException();
}

void Form::beSigned( Bureaucrat const & b)
{
	if (b.getGrade() > this->grade_to_sign)
		throw new Form::GradeTooLowException();
	this->is_signed = true;
}

std::string	Form::getName() const {return this->name;}
std::string	Form::getTarget() const {return this->target;}
bool		Form::is_Signed() const {return this->is_signed;}
int			Form::getGradeToSign() const {return this->grade_to_sign;}
int			Form::getGradeToExec() const {return this->grade_to_exec;}

std::ostream & operator<<( std::ostream& o, Form const & rhs)
{
	o << rhs.getName() << ", " << rhs.is_Signed() << ", " << rhs.getGradeToSign() << ", " << rhs.getGradeToExec();
	return (o);
}

