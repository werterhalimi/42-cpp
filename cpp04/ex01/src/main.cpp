/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/15 17:21:49 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
// Animal leaks test
void first_test(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete i;
	delete j;
}

// Animal copy test with brain
void second_test(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Animal(*j);

	std::cout << "Brain len test:" << j->getBrain()->getLen() == i->getBrain()->getLen() << std::endl;
	std::cout << "Brain address test:" << &j->getBrain() == &i->getBrain() << std::endl;

	delete i;
	delete j;
}

}



void ex01(void)
{
	Animal *animal[50];
	for(int y = 0; y < 50; y++)
	{
		if (y < 25)
		{
			animal[y] = new Dog();
		}
		else
		{
			animal[y] = new Cat();
		}
		delete animal[y];
	}	
}

int main (int argc, char **argv)
{
	first_test();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	second_test();
	(void) argv;
	if (argc != 1)
		ex01();
	return 0;
}
