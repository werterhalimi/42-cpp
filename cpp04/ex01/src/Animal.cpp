/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:30 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 14:52:50 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void )
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal ( std::string type ) : type(type)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal ( Animal const & src ) : type(src.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}


Animal::~Animal ( void )
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & src )
{
	std::cout << "Custom operator has been called" << std::endl;
	this->type = src.getType();
	return *this;
}

void Animal::makeSound ( void ) const
{
	if (this->type == "Dog")
		std::cout << "WOOOOOOOOOOOOOOF" << std::endl;
	else if (this->type == "Cat")
		std::cout << "miaou" << std::endl;
}

std::string Animal::getType ( void ) const
{
	return this->type;
}


WrongAnimal::WrongAnimal ( void )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string type ) : type(type)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const & src ) : type(src.getType())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal ( void )
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
	std::cout << "Custom operator has been called" << std::endl;
	this->type = src.getType();
	return *this;
}

void WrongAnimal::makeSound ( void ) const
{
	if (this->type == "Cat")
		std::cout << "WOOOOOOOOOOOOOOF" << std::endl;
	else if (this->type == "Dog")
		std::cout << "miaou" << std::endl;
}

std::string WrongAnimal::getType ( void ) const
{
	return this->type;
}
