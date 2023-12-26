/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:57:38 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/26 15:46:55 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Ivan;
	ClapTrap Krico("Krico");
	ClapTrap Vasya("Vasya");
	ScavTrap Juja("juja");
	ScavTrap Shinobi("Shinobi");

	Juja.guardGate();
	int i = 0;
	while (i < 49)
	{
		Juja.attack("Shinobi");
		// Shinobi.attack("Krico");
		Krico.attack("Ivan");
		Ivan.attack("Ivan");
		i++;
	}
	Juja.guardGate();
	Shinobi.takeDamage(90);
	Shinobi.beRepaired(90);
	Shinobi.takeDamage(100);
	Shinobi.beRepaired(5);
	// Ivan = Vasya;
	// Krico.attack("Vasya");
	// Krico.takeDamage(9);
	// Krico.beRepaired(5);
	// Krico.takeDamage(1);
	// Krico.takeDamage(1);
	// i = 0;
	// while(i < 10)
	// {
	// 	Krico.attack("Vasya");
	// 	i++;
	// }
	// i = 0;
	// Vasya.takeDamage(5);
	// while(i < 10)
	// {
	// 	Vasya.attack("Krico");
	// 	i++;
	// }
	// Vasya.beRepaired(5);
	// Vasya.takeDamage(5);
		
	return 0;
}