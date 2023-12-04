/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:21:16 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/04 15:32:30 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int k;

	if (ac > 1)
	{
		while (av[i])
		{
			k = 0;
			while (av[i][k])
			{
				av[i][k] = toupper(av[i][k]);
				std::cout << av[i][k];
				k++;
			}
			std::cout << " ";
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}