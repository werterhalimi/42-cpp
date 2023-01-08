/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 04:13:37 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 04:29:41 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
	public:
		Harl( void ) {}
		~Harl( void ) {}
		void	complain( std::string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
