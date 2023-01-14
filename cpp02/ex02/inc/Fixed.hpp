/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:06:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/12 17:49:44 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>


const int SCALE = 8;

class Fixed
{
	public:
		Fixed ( void );
		Fixed ( Fixed const & src);
		~Fixed( void );
		Fixed(int f) : fixed_((int) f << 8 ) { std::cout << "Int constructor" << std::endl;}
		Fixed(float f) : fixed_((int) (f * (1u << 8))) { std::cout << "Float constructor" << std::endl;}

		Fixed & operator=( Fixed const & fixed);
	
		unsigned int	getRawBits( void ) const;
		void			setRawBits( int const bits );
		float			toFloat() const { return (float) fixed_ / (1u << 8); }
		int 			toInt() const { return fixed_ >> 8; }
	private:
		unsigned int fixed_;
};

std::ostream & operator<<( std::ostream& o, Fixed const & rhs);

#endif
