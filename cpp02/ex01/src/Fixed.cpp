/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:07:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/12 17:47:47 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_ ( 0 ){
	std::cout << "Default constructor has been called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor has been called" << std::endl;
	this->fixed_ = src.getRawBits();
}
 

Fixed::~Fixed( void )
{
	std::cout << "Default destructor has been called" << std::endl;
}

unsigned int	Fixed::getRawBits( void ) const
{
	return this->fixed_;
}

void Fixed::setRawBits( int const bits )
{
	this->fixed_ = bits;
}

Fixed&	Fixed::operator=( Fixed const & fixed ) 
{
	std::cout << "Custom operator has been called" << std::endl;
	this->fixed_ = fixed.getRawBits();
	return *this;
}

std::ostream & operator<<(  std::ostream & o, Fixed const & fixed ) 
{
	o << fixed.toFloat();
	return o;
}
