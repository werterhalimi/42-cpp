/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:26:58 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/08 12:07:39 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <algorithm>
# include <vector>
# include <stdexcept>
# include <stdlib.h>


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
		int					at(unsigned int const index) const;
		void				addNumber(int number);
		void				fillNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int					shortestSpan(void) const;
		int					longestSpan(void) const;
	private:
		void				copy(Span const & src);
		unsigned int 		_N;
		unsigned int		len;
		std::vector<int>	*span;

};
#endif
