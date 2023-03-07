/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:26:58 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/06 22:08:28 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN__H
# include <iostream>
# include <algorithm>
# include <vector>
# include <stdexcept>


class Span
{
	public:
		Span (void);
		~Span (void);
		Span (Span const & src);
		Span (unsigned int size);

		Span &			operator=(Span const & src);
		unsigned int		size() const;
		unsigned int		length() const;
		void			addNumber(int number);
	private:
		unsigned int const	_N;
		unsigned int		len;
		std::vector<int>	*span;

};
#endif
