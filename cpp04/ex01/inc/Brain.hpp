/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:16:43 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 16:40:40 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
		Brain ( void );
		Brain ( Brain const & src );
		~Brain ( void );

		Brain & operator=( Brain const & src);

		int		getLen() const;
		std::string*	getIdeas( void ) const;
	private:
		std::string	*ideas;
		int		len;
};

void	copyBrain(Brain &src, Brain &dest);

#endif
