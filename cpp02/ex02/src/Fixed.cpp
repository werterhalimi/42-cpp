/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:07:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 22:26:38 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_ ( 0 ){}
Fixed::Fixed( int f ) : fixed_ ( (int) f << 8 ){}
Fixed::Fixed( float f ) : fixed_ ( (int) (f * (1u << 8))){}

Fixed::Fixed( Fixed const & src ) {
	this->fixed_ = src.getRawBits();
}
 

Fixed::~Fixed( void )
{
}

unsigned int	Fixed::getRawBits( void ) const
{
	return this->fixed_;
}

void Fixed::setRawBits( int const bits )
{
	this->fixed_ = bits;
}

bool	Fixed::operator!=( Fixed const & fixed ) const
{
	return this->toFloat() != fixed.toFloat();
}



bool	Fixed::operator==( Fixed const & fixed ) const
{
	return this->toFloat() == fixed.toFloat();
}


bool	Fixed::operator<( Fixed const & fixed ) const
{
	return this->toFloat() < fixed.toFloat();
}

bool	Fixed::operator>=( Fixed const & fixed ) const
{
	return this->toFloat() >= fixed.toFloat();
}

bool	Fixed::operator<=( Fixed const & fixed ) const
{
	return this->toFloat() <= fixed.toFloat();
}

bool	Fixed::operator>( Fixed const & fixed ) const 
{
	return this->toFloat() > fixed.toFloat();
}

Fixed	Fixed::operator-( Fixed const & fixed ) const 
{
	Fixed ret(this->toFloat() - fixed.toFloat());
	return (ret);
}

Fixed	Fixed::operator+( Fixed const & fixed ) const
{
	Fixed ret(this->toFloat() + fixed.toFloat());
	return (ret);
}

Fixed	Fixed::operator*( Fixed const & fixed ) const
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed	Fixed::operator/( Fixed const & fixed ) const
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	(void) ret;
	return (ret);
}

Fixed	Fixed::operator++( int ) 
{
	Fixed f(*this);
	f = f + 1;
	this->fixed_ = f.getRawBits();
	return (*this - 1);
}

Fixed	&Fixed::operator--( void ) 
{
	this->fixed_-=1;
	return (*this);
}

Fixed	Fixed::operator--( int ) 
{
	this->fixed_-=1;
	return (*this + 1);
}

Fixed	&Fixed::operator++( void ) 
{
	Fixed f(*this);
	f = f + 1;
	this->fixed_ = f.getRawBits();
	return (*this);
}




Fixed&	Fixed::operator=( Fixed const & fixed )
{
	this->fixed_ = fixed.getRawBits();
	return *this;
}

std::ostream & operator<<(  std::ostream & o, Fixed const & fixed ) 
{
	o << fixed.toFloat();
	return o;
}
