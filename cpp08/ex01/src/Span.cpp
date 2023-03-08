/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:26:56 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/08 12:35:09 by shalimi          ###   ########.fr       */
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


Span::Span(unsigned int size) : _N(size),len(0u) ,span(new std::vector<int>(size, 0))
{
	#ifdef STUPID
	std::cout << "Span unsigned int constructor" << std::endl;
	#endif
}



Span::Span(Span const & src)
{
	this->copy(src);
	#ifdef STUPID
	std::cout << "Span copy constructor" << std::endl;
	#endif
}

Span &	Span::operator=(Span const & src)
{
	this->copy(src);
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

int			Span::at(unsigned int const index) const
{
	return this->span->at(index);
}

void		Span::addNumber(int number)
{
	if (this->len == this->_N)
		throw std::invalid_argument("Too many number in the list");
	this->span->at(this->len++) = number;
}

void		Span::fillNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

int			Span::shortestSpan(void) const
{
	if (this->len < 1) throw new std::invalid_argument("Span doesn't have enough number to calculate span");
	int	res = abs(this->at(0) - this->at(1));
	unsigned int	i = 0;
	unsigned int	j;
	int span;
	while (i < this->len)
	{
		j = -1;
		while (++j < this->len)
		{
			if(j == i) continue;
			span = abs(this->at(i) - this->at(j));
			if (span < res) res = span;
		}
		i++;
	}
	return (res);
}

int			Span::longestSpan(void) const
{
	if (this->len < 1) throw new std::invalid_argument("Span doesn't have enough number to calculate span");
	int	res = abs(this->at(0) - this->at(1));
	unsigned int	i = 0;
	unsigned int	j;
	int span;
	while (i < this->len)
	{
		j = -1;
		while (++j < this->len)
		{
			if (j == i) continue;
			span = abs(this->at(i) - this->at(j));
			if (span > res) res = span;
		}
		i++;
	}
	return (res);
}


void		Span::copy(Span const & src)
{
	if (this->_N)
		for(unsigned int i = 0; i < this->_N; i++)
			this->span->at(i) = src.at(i);
}
