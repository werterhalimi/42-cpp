/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:36 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 19:05:27 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog ( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

