/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:06:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 22:26:45 by shalimi          ###   ########.fr       */
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
		Fixed(int f);
		Fixed(float f);

		Fixed & operator=( Fixed const & fixed);
	
		bool operator<=( Fixed const & fixed) const;
		bool operator>=( Fixed const & fixed) const;
		bool operator>( Fixed const & fixed) const;
		bool operator<( Fixed const & fixed) const;
		bool operator==( Fixed const & fixed) const;
		bool operator!=( Fixed const & fixed) const;


		Fixed  operator-( Fixed const & fixed) const;
		Fixed  operator+( Fixed const & fixed) const;
		Fixed  operator*( Fixed const & fixed) const;
		Fixed  operator/( Fixed const & fixed) const;
		Fixed  &operator++( void );
		Fixed  operator++( int );
		Fixed  &operator--( void );
		Fixed  operator--( int );	
		unsigned int	getRawBits( void ) const;
		void			setRawBits( int const bits );
		float			toFloat() const { return (float) fixed_ / (1u << 8); }
		int 			toInt() const { return fixed_ >> 8; }
	private:
		unsigned int fixed_;
};

std::ostream & operator<<( std::ostream& o, Fixed const & rhs);

#endif
