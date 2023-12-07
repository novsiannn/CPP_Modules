/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:09:17 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/07 20:23:11 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl instance;
	int i;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
	{
		std::cout << "Input incorrect." << std::endl;;
		std::cout <<  "Usage - ./harlFilter [ your cmd ] cmds = DEBUG, INFO, WARNING, ERROR." << std::endl;
		return (1);
	}
	
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == av[1])
			break;
	}
	switch (i)
	{
		case 0:
			instance.complain("DEBUG");
		case 1:
			instance.complain("INFO");
		case 2:
			instance.complain("WARNING");
		case 3:
			instance.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;;
	}
	return (0);
}