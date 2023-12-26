/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:57:38 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/26 11:27:23 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Ivan;
	ClapTrap Krico("Krico");
	ClapTrap Vasya("Vasya");

	Ivan = Vasya;
	Krico.attack("Vasya");
	Krico.takeDamage(9);
	Krico.beRepaired(5);
	Krico.takeDamage(1);
	Krico.takeDamage(1);
	int i = 0;
	while(i < 10)
	{
		Krico.attack("Vasya");
		i++;
	}
	i = 0;
	Vasya.takeDamage(5);
	while(i < 10)
	{
		Vasya.attack("Krico");
		i++;
	}
	Vasya.beRepaired(5);
	Vasya.takeDamage(5);
		
	return 0;
}