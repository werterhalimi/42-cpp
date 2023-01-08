/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:49:39 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/06 20:23:06 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact 
{
	public :
		Contact(void);
		~Contact(void);
		void	create();
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone();
		std::string	get_secret();

	private :
		void	set_value(std::string promt, std::string &value);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string secret;

};

#endif
