/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 15:38:13 by novsiann         ###   ########.fr       */
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
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;

	// My tests with animals

	Animal *animals[10];

	for (int i = 0; i <	sizeof(animals) / 8; i ++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();

		std::cout << "s" << std::endl;
	}
	for (int i = 0; i <	sizeof(animals) / 8; i ++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}