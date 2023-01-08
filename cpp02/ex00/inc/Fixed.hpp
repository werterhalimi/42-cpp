/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:06:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 20:40:40 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed ( void );
		Fixed ( Fixed & src );
		~Fixed ( void );

		Fixed & operator=( Fixed const & fixed);
		
		int		getRawBits ( void ) const;
		void	setRawBits ( int const bits );
		int		getValue ( void ) const;

	private:
		int	value;
		int const bits;
};

#endif
