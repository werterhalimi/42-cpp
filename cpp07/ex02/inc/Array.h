/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:05:27 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/07 15:01:27 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		~Array(void);
		Array(unsigned int const & n);
		Array(Array const & src);
		Array & operator=(Array const & src);
		T & operator[](unsigned int index);
		unsigned int size() const;
	
	private:
		T	*array;
		unsigned int len;
};


template<typename T>
Array<T>::~Array(void) { delete[] this->array; }

template<typename T>
Array<T>::Array(void) : array(new T[0]), len(0u) {}

template<typename T>
Array<T>::Array(unsigned int const & n) : array(new T[n]), len(n) {}

template<typename T>
Array<T>::Array(Array const & src) : array(new T[src.size()]), len(src.size()) {}


template<typename T>
Array<T> & Array<T>::operator=(Array const & src)
{
	delete this->array;
	this->len = src.size();
	this->array = new T[this->len];
	int i = 0;
	while (i < this->len)
	{
		this->array[i] = src[i];
		i++;
	}
	return *this;
}

template<typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= this->len)
	{
		throw std::invalid_argument("Out of range");
	}
	return this->array[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return this->len;
}





#endif
