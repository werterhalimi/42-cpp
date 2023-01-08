/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:58:24 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 01:51:37 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	replace(std::string str, std::string old, std::string n)
{
	int i = 0;
	std::string ret;
	(void) old;
	(void) n;
	while (i < (int) str.length())
	{
		std::string word = str.substr(i, old.length());
		if (word == old)
		{
			ret += n;
			i += old.length() - 1;
		}
		else
			ret += str[i];
		i++;
	}
	return ret;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Faites ./pdn <Fichier> <old> <new>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");
	std::string buff;
	while (std::getline(ifs, buff))
	{
		buff = replace(buff, argv[2], argv[3]);
		ofs << buff << std::endl;
	}
	ifs.close(); 
	ofs.close(); 
	return 0;
}
