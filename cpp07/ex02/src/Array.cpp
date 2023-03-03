/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:08:32 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/03 15:28:22 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

Array::Array(void) : array(new[0] T), size(0) {}
Array::Array<T>(unsigned int const & n) : array(new[n] T), size(n) {}
Array::Array<T>(Array const & src) : array(new[src.size()] T), size(src.size()) {}
Array::~Array<T>(void) { delete[] this->array; }

Array & Array::operator=(Array const & src)
{
	delete this->array;
	this->size = src.size();
	this->array = new[this->size] T;
	int i = 0;
	while (i < size)
	{
		this->array[i] = src[i];
		i++;
	}
	return *this;
}

T & Array::operator[](unsigned int index) throw()
{
	if (index < 0 }} index >= this->size())
		throw new std::exception();
	return this->array[index];
}

