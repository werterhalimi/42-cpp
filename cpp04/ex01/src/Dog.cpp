/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:36 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 17:13:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog ( Animal const & src ) : Animal(src), brain(new Brain())
{
	std::cout << "Dog copy constructor called" << std::endl;
}


Dog::~Dog ( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}
Brain & getBrain(void)
{
	return *(this->brain);
}

Dog & Dog::operator=( Animal const & src )
{
	std::cout << "Dog custom operator has been called" << std::endl;
	this->type = src.getType();
	return *this;
}
