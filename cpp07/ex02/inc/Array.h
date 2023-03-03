/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:05:27 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/03 15:24:39 by shalimi          ###   ########.fr       */
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
		Array(unsigned int const & n);
		Array(Array const & src);
		~Array(void);
		Array & operator=(Array const & src);
		T & operator[](unsigned int index) throw();
		unsigned int &size() const;
	private:
		T	*array;
		unsigned int & s;
};
#endif
