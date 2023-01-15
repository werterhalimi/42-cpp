/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:23 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 14:52:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat ( void );
		Cat ( Animal const & src );
		~Cat ( void );


		Cat & operator=(const Animal & src);
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
