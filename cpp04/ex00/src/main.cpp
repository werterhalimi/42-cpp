/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 14:57:10 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void testAnimal( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog test(*j);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	test.makeSound();
	delete meta;
	delete j;
	test = *i;
	test.makeSound();


	delete i;
}

void testWrongAnimal( void )
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongAnimal("Dog");
	const WrongAnimal* i = new WrongCat();
	WrongCat test(*j);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	test.makeSound();
	delete meta;
	delete j;
	test = *i;
	test.makeSound();


	delete i;
}



int main (void)
{
	testAnimal();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	testWrongAnimal();
	return 0;
}
