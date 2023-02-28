/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <shalimi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:46:15 by shalimi           #+#    #+#             */
/*   Updated: 2023/02/28 19:46:15 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H
# include <iostream>
# include <cstdlib>

class Base
{
	public:
		virtual ~Base(void);
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif
