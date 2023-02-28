/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:24:12 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/28 19:27:57 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H
#include "main.h"

class ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter( ScalarConverter const & src);
		~ScalarConverter(void);

		ScalarConverter operator=(ScalarConverter const & src);

		static void convert(std::string str);
};

#endif
