/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:49:27 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 16:04:18 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact( void )
{
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nick_name()
{
	return (this->nickname);
}

std::string Contact::get_phone()
{
	return (this->phone);
}

std::string Contact::get_secret()
{
	return (this->secret);
}

void Contact::set_value(std::string prompt, std::string &value)
{
	std::string buff;
	std::cout << prompt; 
	std::getline(std::cin, buff);
	if (std::cin.eof())
	{
		std::cout << std::endl << "Closing les pages jaunes" << std::endl;
		exit(0);
	}
	value = buff;
	
	if (buff.empty())
		this->set_value(prompt, value);
}

void Contact::create( void )
{
	std::cout << "Creation d'un nouveau contact. Veuillez remplir les informations." << std::endl;
	this->set_value("Qu'elle est son prenom : ", this->first_name);
	this->set_value("Qu'elle est son nom : ", this->last_name);
	this->set_value("Qu'elle est son surnom : ", this->nickname);
	this->set_value("Qu'elle est son telephone : ", this->phone);
	this->set_value("Qu'elle est son secret : ", this->secret);
	return ;
}

Contact::~Contact( void )
{
}
