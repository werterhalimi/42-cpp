/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:49:16 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 16:02:56 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <cstdlib>


Phonebook::Phonebook(void)
{
	this->len = 0;
	this->last = 0;
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::add_contact()
{
	if (this->len < 8)
	{
		this->contacts[this->len].create();
		this->len += 1;
		return;
	}
	this->contacts[this->last].create();
	this->last += 1;
	if (this->last == 8)
		this->last = 0;
}

void Phonebook::show_contact(int index)
{
	std::cout << "Prenom : " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "Nom : " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "Surnom : " << this->contacts[index].get_nick_name() << std::endl;
	std::cout << "Telephone : " << this->contacts[index].get_phone() << std::endl;
	std::cout << "Secret : " << this->contacts[index].get_secret() << std::endl;
}

void Phonebook::search()
{
	if (this->len == 0)
	{
		std::cout << "Vous n'avez aucun contact, ajoutez en un avec la commande ADD" << std::endl;
		return;
	}
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	for(int i = 0; i < this->len; i++)
	{
		std::string first_name = this->contacts[i].get_first_name();
		first_name.resize(10, ' ');
		if (this->contacts[i].get_first_name().length() >= 9)
			first_name[9] = '.';

		std::string last_name = this->contacts[i].get_last_name();
		last_name.resize(10, ' ');
		if (this->contacts[i].get_last_name().length() >= 9)
			last_name[9] = '.';

		std::string nickname = this->contacts[i].get_nick_name();
		nickname.resize(10, ' ');
		if (this->contacts[i].get_nick_name().length() >= 9)
			nickname[9] = '.';
		std::cout << "|" << i << "         |" << first_name << "|" << last_name << "|" << nickname << "|" << std::endl;
	}
	std::cout << "Entrez un index>";
	std::string buff;
	std::getline(std::cin, buff);
	if (buff[0] < '0' || buff[0] > '8')
	{
		std::cout << "L'index est pas bon, retour au menu." << std::endl;
		return;
	}
	int index = stoi(buff);
	if (index < 0 || index > this->len)
		std::cout << "L'index est pas bon, retour au menu." << std::endl;
	else
		this->show_contact(atoi(buff.c_str()));
}
