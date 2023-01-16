/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:43:30 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 23:10:30 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

//Bureaucrat::GradeTooHighException::GradeTooHighException( std::string const & name, int const & grade) : name(name), grade(grade){}
//Bureaucrat::GradeTooLowException::GradeTooLowException( std::string const & name, int const & grade) : name(name), grade(grade){}

const char * Bureaucrat::GradeTooHighException::what () const  throw()
{
	return ("Grade is higher than 1");
}
const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Grade is bellow 1");
}

Bureaucrat::Bureaucrat( void ) : name("Default", 150 ){}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name), grade(grade)
{
	if (grade < 1)
		throw new Bureaucrat::GradeTooLowException();
	else if ( grade > 150)
		throw new Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat ( Bureaucrat const & src ) : name(src.getName()), grade(src.getGrade()) {}

std::string	Bureaucrat::getName( void ) const
{
	return this->name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
	this->grade = src.getGrade();
	return *this;
}

void	Bureaucrat::decrement()
{
	this->grade += 1;
	if (grade < 1)
		throw new Bureaucrat::GradeTooLowException();
	else if ( grade > 150)
		throw new Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::increment()
{
	this->grade -= 1;
	if (grade < 1)
		throw new Bureaucrat::GradeTooLowException();
	else if ( grade > 150)
		throw new Bureaucrat::GradeTooHighException();
}

std::ostream & operator<<( std::ostream& o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " <<rhs.getGrade();
	return (o);

}

