/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:16:32 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/27 17:14:28 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void ) : ideas(new std::string[100]), len(100)
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain ( Brain const & src ) : ideas(new std::string[100]), len(100)
{
	std::cout << "Brain copy constructor" << std::endl;
	for(int i = 0; i < src.getLen(); i++)
		this->ideas[i] = src.getIdeas()[i];
	
}

Brain::~Brain ( void )
{
	std::cout << "Brain got deletetd" << std::endl;
	delete[] this->ideas;
}


Brain & Brain::operator=( Brain const & src )
{
	for(int i = 0; i < src.getLen(); i++)
		this->ideas[i] = src.getIdeas()[i];
	return *this;
}

int Brain::getLen( void ) const
{
	return this->len;
}

std::string * Brain::getIdeas ( void ) const
{
	return this->ideas;
}

void copyBrain(Brain &src, Brain &dest)
{
	for(int i = 0; i < src.getLen(); i++)
		dest.getIdeas()[i] = src.getIdeas()[i];
}
