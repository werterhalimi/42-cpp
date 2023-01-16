/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:37:26 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 18:08:38 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


// Animal copy test with brain
void second_test(void)
{
	const Dog* j = new Dog();
	const Dog* i = new Dog(*j);

	std::cout << "Brain len test:" << (j->getBrain().getLen() == i->getBrain().getLen()) << std::endl;
	std::cout << "Brain address test:" << ((&j->getBrain()) == (&i->getBrain())) << std::endl;
	bool sameContent = true;
	for(int y = 0; y < j->getBrain().getLen(); y++)
		if (j->getBrain().getIdeas()[y] != i->getBrain().getIdeas()[y])
			sameContent = false;
	std::cout << "Brain content test: " << sameContent << std::endl;

	delete i;
	delete j;
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
	second_test();
	(void) argv;
	if (argc != 1)
		ex01();
	return 0;
}
