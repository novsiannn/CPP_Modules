/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:49:52 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/20 19:21:24 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	// { //Base test from pdf 
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());
	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	ICharacter* bob = new Character("bob");
	// 	me->use(0, *bob);
	// 	me->use(1, *bob);
	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// 	return 0;
	// }
	{
	// Test for Character full inventory #1
	// Character bob;
	// ICharacter *nik = new Character("Nikita");
	// ICharacter *mer = new Character("Mer");
	// AMateria *test1 = new Ice();
	// AMateria *test2 = new Cure();
	// AMateria *test3 = new Ice();
	// AMateria *test4 = new Cure();
	// AMateria *test5 = new Ice();

	// bob.equip(test1);
	// bob.equip(test2);
	// bob.equip(test3);
	// bob.equip(test4);

	// bob.unequip(0);
	// bob.equip(test1);
	// bob.use(0, *mer);
	// bob.use(1, *nik);
	// bob.use(2, *mer);
	// bob.use(3, *nik);
	// bob.use(4, *nik);
	// delete test5;
	// delete nik;
	// delete mer;
	}

	{ // Test for Character full inventory #1
		Character kendrick("kendrick");
		Character lamar;

		ICharacter *nik = new Character("Nikita");
		ICharacter *mer = new Character("Mer");
	
		AMateria *test1 = new Ice();
		AMateria *test2 = new Cure();
		AMateria *test3 = new Ice();
		AMateria *test4 = new Cure();
		AMateria *test5 = new Ice();

		kendrick.equip(test1);
		kendrick.equip(test2);
		kendrick.equip(test3);
		kendrick.equip(test4);
	
		lamar = kendrick;

		kendrick.unequip(0);
		kendrick.unequip(1);
		kendrick.unequip(2);
		kendrick.unequip(3);
		kendrick.unequip(4);
	
		lamar.use(0, *mer);
		lamar.use(1, *nik);
		lamar.use(2, *mer);
		lamar.use(3, *nik);
		lamar.use(4, *nik);

		kendrick.equip(test1);
		kendrick.equip(test2);
		kendrick.equip(test3);
		kendrick.equip(test4);
	
		kendrick.use(0, *mer);
		kendrick.use(1, *nik);
		kendrick.use(2, *mer);
		kendrick.use(3, *nik);

		delete test5;
		delete nik;
		delete mer;
	}

	{
		// Ice led;
		// Cure zakr;
		
		// std::cout << led.getType() << std::endl;
		// std::cout << zakr.getType() << std::endl;
		
		// AMateria *led_new = led.clone();
		// AMateria *zakr_new = zakr.clone();
		// std::cout << led_new->getType() << std::endl;
		// std::cout << zakr_new->getType() << std::endl;
		// delete led_new;
		// delete zakr_new;
	}
}
