/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:05:50 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/07 16:37:29 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define  MAIN_H
# include <iostream>

template <typename T>
void	swap(T & a, T & b);

template <typename T>
T &	max(T & a, T & b);
template <typename T>
T &	min(T & a, T & b);

template <typename T>
void 	swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &	max(T & a, T & b) 
{
	if (a <= b)
		return b;
	return a;
}

template <typename T>
T &	min(T & a, T & b)
{
	if (a >= b)
		return b;
	return a;
}

#endif
