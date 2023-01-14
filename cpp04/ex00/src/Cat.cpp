/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:39 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/14 19:05:27 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat ( void ) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat ( void )
{
	std::cout << "Cat destructor called" << std::endl;
}
