/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:07:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 23:50:21 by shalimi          ###   ########.fr       */
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
	this->fixed_ = this->getRawBits() + 1;
	return (f);
}

Fixed	&Fixed::operator++( void ) 
{
	this->fixed_ = this->getRawBits() + 1;
	return (*this);
}

Fixed	Fixed::operator--( int ) 
{
	Fixed f(*this);
	this->fixed_ = this->getRawBits() - 1;
	return (f);
}

Fixed	&Fixed::operator--( void ) 
{
	this->fixed_ = this->getRawBits() - 1;
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

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

float			Fixed::toFloat() const { return (float) fixed_ / (1u << 8); }
int 			Fixed::toInt() const { return fixed_ >> 8; }
