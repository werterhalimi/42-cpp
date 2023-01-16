/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:39 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 16:48:24 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


void Cat::makeSound ( void ) const
{
		std::cout << "miaou" << std::endl;
}



Cat::Cat ( void ) : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat ( Cat const & src ) : Animal(src), brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
	copyBrain(src.getBrain(), this->getBrain());
}


Cat::~Cat ( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Brain & Cat::getBrain(void) const
{
	return *(this->brain);
}


Cat & Cat::operator=( Cat const & src )
{
	std::cout << "Cat custom operator has been called" << std::endl;
	this->type = src.getType();
	copyBrain(src.getBrain(), this->getBrain());
	return *this;
}


WrongCat::WrongCat ( void ) : WrongAnimal("Cat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat ( WrongAnimal const & src ) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}


WrongCat::~WrongCat ( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}


WrongCat & WrongCat::operator=( WrongAnimal const & src )
{
	std::cout << "WrongCat custom operator has been called" << std::endl;
	this->type = src.getType();
	return *this;
}
