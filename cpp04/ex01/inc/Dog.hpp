/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:21 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 16:40:40 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog ( void );
		Dog ( Dog const & src );
		~Dog ( void );

		Brain & getBrain( void ) const;
		Dog & operator=(const Dog & src);
	private:
		Brain *brain;
};
#endif
