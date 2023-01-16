/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 18:09:42 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
	public:
		Cat ( void );
		Cat ( Cat const & src );
		~Cat ( void );

		Brain & getBrain( void ) const;
		void	makeSound ( void ) const;
		Cat & operator=(const Cat & src);
	private:
		Brain *brain;

};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat ( void );
		WrongCat ( WrongAnimal const & src );
		~WrongCat ( void );


		WrongCat & operator=(const WrongAnimal & src);
};

#endif
