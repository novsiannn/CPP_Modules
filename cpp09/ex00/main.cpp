/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/26 11:02:26 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int ac, char **av ) 
{	
	BitcoinExchange base;
	if(ac != 2)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return (1);
	}

	try
	{
		base.read_data();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	// std::string line;
	std::ifstream file(av[1]);
	if (file.is_open())
	{
			
	}			
	file.close();

	return 0;

}