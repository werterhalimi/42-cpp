/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:07:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 20:41:30 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : value ( 0 ), bits( 8 )
{
	std::cout << "Default constructor has been called" << std::endl;
}

Fixed::Fixed( Fixed & src ) : bits( 8 )
{
	std::cout << "Copy constructor has been called" << std::endl;
	this->value = src.getRawBits();
}

Fixed::~Fixed( void )
{
	std::cout << "Default destructor has been called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const bits )
{
	this->value = bits;
}

Fixed&	Fixed::operator=( Fixed const & fixed ) 
{
	std::cout << "Custom operator has been called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}
