/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:26:56 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/06 22:16:07 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span(void) : _N(0), len(0u), span(new std::vector<int>(_N, 0))
{
	#ifdef STUPID
	std::cout << "Span default constructor" << std::endl;
	#endif
}

Span::~Span(void)
{
	if (this->_N)
		delete this->span;
	#ifdef STUPID
	std::cout << "Span default destructor" << std::endl;
	#endif
}


Span::Span(unsigned int size) : _N(size),len(0) ,span(new std::vector<int>(size, 0))
{
	#ifdef STUPID
	std::cout << "Span unsigned int constructor" << std::endl;
	#endif
}



Span::Span(Span const & src) : _N(src.size()), span(new std::vector<int>(src.size())), len(0)
{
	if (this->_N)
		for(unsigned int i = 0; i < _N; i++)
			this->span.at(i) = src.at(i);
	#ifdef STUPID
	std::cout << "Span copy constructor" << std::endl;
	#endif
}

Span &	Span::operator=(Span & src)
{
	this->_N = span.size();
	this->span = new std::vector<int>(this->_N);
	this->len = span.length();
	if (this->_N)
	{

		this->span = new new unsigned int[_N];
		for(unsigned int i = 0; i < _N; i++)
			this->span->at(i) = src.at(i);
	}

	return *this;
}

unsigned int	Span::size(void) const
{
	return this->_N;
}


unsigned int	Span::length(void) const
{
	return this->len;
}



void		Span::addNumber(int number)
{
	if (this->len >= this->_N)
		throw std::invalid_argument("Too many number in the list");
	this->span->at(this->len++) = number;
}
