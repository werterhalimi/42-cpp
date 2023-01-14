/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:30 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 19:05:41 by shalimi          ###   ########.fr       */
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
	else
		std::cout << "miaou" << std::endl;
}

std::string Animal::getType ( void ) const
{
	return this->type;
}
