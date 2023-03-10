/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:36 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 14:46:49 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog ( Animal const & src ) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}


Dog::~Dog ( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=( Animal const & src )
{
	std::cout << "Dog custom operator has been called" << std::endl;
	this->type = src.getType();
	return *this;
}
