/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:39 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 17:13:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat ( void ) : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat ( Animal const & src ) : Animal(src), brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
}


Cat::~Cat ( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Brain & getBrain(void)
{
	return *(this->brain);
}

Cat & Cat::operator=( Animal const & src )
{
	std::cout << "Cat custom operator has been called" << std::endl;
	this->type = src.getType();
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
