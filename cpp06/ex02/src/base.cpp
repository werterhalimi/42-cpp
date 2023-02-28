/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:53:52 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/28 19:48:28 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

Base::~Base(void)
{
	std::cout << "Base desctructor" << std::endl;
}

void	identify(Base & p)
{

	try
	{
		A a =dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		(void) e;
	}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e)
	{
		(void) e;
	}

	try
	{
		C c =dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e)
	{
		(void) e;
	}
}

void identify(Base * p)
{
	A *a =dynamic_cast<A*>(p);
	B *b =dynamic_cast<B*>(p);
	C *c =dynamic_cast<C*>(p);
	if (a) std::cout << "A" << std::endl;
	if (b) std::cout << "B" << std::endl;
	if (c) std::cout << "C" << std::endl;
}

Base *	generate(void)
{
	int random = std::rand();
	int third = RAND_MAX / 3;

	if (random <= third)
		return new A();
	else if (random <= third * 2)
		return new B();
	else
		return new C();
}



int	main(void)
{
	{
		Base *a = new A();;
		Base *b = new B();;
		Base *c = new C();;
		
		identify(a);
		identify(b);
		identify(c);


		identify(*a);
		identify(*b);
		identify(*c);
		
		delete a;
		delete b;
		delete c;

		for(int i = 0; i != 10;i++)
		{
			Base *random = generate();
			identify(random);
			identify(*random);
			delete random;
		}
	}

}
