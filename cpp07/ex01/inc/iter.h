/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:27:59 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/07 17:27:18 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <iostream>

template <typename T>
void	iter(T *array, unsigned int len, void (*f)(T const & el))
{
	unsigned int	i = 0;
	while (i < len)
		f(array[i++]);
}

template <typename T>
void	iter(T *array, unsigned int len, void (*f)(T & el))
{
	unsigned int	i = 0;
	while (i < len)
		f(array[i++]);
}


template <typename T>
void	increment(T & i)
{
	i++;
}


#endif
