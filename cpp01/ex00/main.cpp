/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:54:17 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 17:51:34 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie krico("Krico");

	krico.announce();
	Zombie *kawazaki = newZombie("Kawazaki");
	kawazaki->announce();
	delete(kawazaki);

	randomChump("estriper");
	return (0);
}