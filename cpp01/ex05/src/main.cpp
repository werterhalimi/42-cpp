/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 04:16:14 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/07 04:17:24 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl harl;

	harl.complain("123");
	harl.complain("info");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
}
