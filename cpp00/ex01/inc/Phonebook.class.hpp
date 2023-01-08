/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:48:59 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 20:24:06 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add_contact();
		void	search();
	
	private:
		void	show_contact(int index);
		Contact contacts[8];
		int		last;
		int		len;
	
};

#endif
