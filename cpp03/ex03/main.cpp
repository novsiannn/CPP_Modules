/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:57:38 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/27 12:47:46 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap Ivan;
	// ClapTrap Krico("Krico");
	ClapTrap Vasya("Vasya");
	// ScavTrap Juja("juja");
	// ScavTrap Shinobi("Shinobi");
	// FragTrap Killer("Killer");
	DiamondTrap Kesha("KENTIK");
	DiamondTrap Digga(Kesha);

	Digga.whoAmI();
	Kesha.whoAmI();
	Digga.attack( " zhora");
	Digga.guardGate();
	// Killer.attack("Zeus");
	// Killer.takeDamage(100);
	// Killer.beRepaired(4);
	// Killer.attack("somebody");
	// Here should give a mistake, because guardGate is a membet Function of class ScavTrap.
	// Killer.guardGate();
	// Killer.highFivesGuys();
	// Juja.guardGate();
	// int i = 0;
	// while (i < 49)
	// {
	// 	Juja.attack("Shinobi");
	// 	Shinobi.attack("Krico");
	// 	Krico.attack("Ivan");
	// 	Ivan.attack("Ivan");
	// 	i++;
	// }
	// Juja.guardGate();
	// Shinobi.takeDamage(90);
	// Shinobi.beRepaired(90);
	// Shinobi.takeDamage(100);
	// Shinobi.beRepaired(5);
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
		
	// return 0;
}