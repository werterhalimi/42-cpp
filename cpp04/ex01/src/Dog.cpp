/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:36 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/27 17:18:54 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog ( Dog const & src ) : Animal(src), brain(new Brain())
{
	std::cout << "Dog copy constructor called" << std::endl;
	copyBrain(src.getBrain(), this->getBrain());
}

void Dog::makeSound ( void ) const
{
	std::cout << "WOUF" << std::endl;
}



Dog::~Dog ( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}
Brain & Dog::getBrain(void) const
{
	return *(this->brain);
}

Dog & Dog::operator=( Dog const & src )
{
	std::cout << "Dog custom operator has been called" << std::endl;
	this->type = src.getType();
	copyBrain(src.getBrain(), this->getBrain());
	return *this;
}
