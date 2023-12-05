/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:07:06 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 18:53:32 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		num = 15;
	Zombie	*Horde;
	
	Horde = zombieHorde(num, "Wiktor");
	for(int i = 0;i < num;i++)
		Horde[i].announce();

	delete[] Horde;

	return (0);
}