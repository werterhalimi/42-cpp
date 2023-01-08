/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:41 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 00:12:31 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon( std::string type );
		~Weapon( void );
		void		setType( std::string type );
		std::string const &	getType();

	private:
		std::string type;
};

#endif
