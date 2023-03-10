/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:17 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 14:52:57 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal ( void );
		Animal ( std::string type );
		~Animal ( void );
		Animal ( Animal const & src );

		Animal & operator=(const Animal & src);

		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

class WrongAnimal
{
	public:
		WrongAnimal ( void );
		WrongAnimal ( std::string type );
		~WrongAnimal ( void );
		WrongAnimal ( WrongAnimal const & src );

		WrongAnimal & operator=(const WrongAnimal & src);

		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};



#endif
