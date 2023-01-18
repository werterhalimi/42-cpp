/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:06:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/18 22:35:02 by shalimi          ###   ########.fr       */
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

		static const Fixed & min(Fixed const & a, Fixed const & b);
		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
	private:
		unsigned int fixed_;
};

std::ostream & operator<<( std::ostream& o, Fixed const & rhs);

#endif
