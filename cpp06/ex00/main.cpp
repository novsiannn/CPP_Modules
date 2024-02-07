/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/07 20:39:55 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "Incorrect amount of arguments!" << std::endl;
		return (1);
	}
	std::string str1( av[1] );
	ScalarConverter::convert( str1 );
	return (0);
}