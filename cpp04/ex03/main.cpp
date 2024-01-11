/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:49:52 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/11 21:33:12 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	Cure test1;
	Ice test2;
	Character test3 ("suslik");
	Character test4 = test3;
	Character test5 = test4;
	AMateria *nikita = test2.clone();
	test3.setName("kawazaki");

	std::cout << test1.getType() << std::endl;
	std::cout << test2.getType() << std::endl;
	std::cout << test3.getName() << std::endl;
	std::cout << test5.getName() << std::endl;
	std::cout << nikita->getType() << std::endl;

	delete nikita;
	return (0);
}