/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 14:30:08 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	//Base tests
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	// My tests with animals

	Animal *animals[10];

	for (int i = 0; i <	sizeof(animals) / 8; i ++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i <	sizeof(animals) / 8; i ++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}

	// another tests
	// Cat Bobik;
	// Bobik.makeSound();
	// Animal *sobaka = new Dog();
	// delete sobaka;

	// // thinking tests for cat
	// Cat Lola;
	// Lola.makeSound();
	// for (int i = 0; i < 110; i++)
	// Lola.think("That life is so boring...");
	// Lola.think("That");
	// Lola.think("life");
	// Lola.think("is");
	// Lola.think("so");
	// Lola.think("boring");
	// Lola.think("...");
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << Lola.recall(i) << std::endl;
	// }
	// Lola.think("That life is so boring...");
	// std::cout << Lola.recall(0) << std::endl;

	// thinking tests for dog
	// Dog Jack;

	// Jack.makeSound();
	// Jack.think("That life is so boring...");
	// Jack.think("That");
	// Jack.think("life");
	// Jack.think("is");
	// Jack.think("so");
	// Jack.think("boring");
	// Jack.think("...");
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << Jack.recall(i) << std::endl;
	// }
	// std::cout << Jack.recall(0) << std::endl;

	// test for deep copy of copy operator
	// Dog braian("Nik");
    // braian.think("I am pretty.");
	// std::cout << braian.recall(0) << std::endl;
	// Dog copyBraian = braian;
	// braian.~Dog();
	// copyBraian.makeSound();
	// std::cout << copyBraian.recall(0) << std::endl;

	return 0;
}