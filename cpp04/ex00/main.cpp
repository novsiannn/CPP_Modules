/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/31 12:45:19 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	//Subject tests

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// std::cout << meta->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete j;
	// delete meta;

	//My tests

	// Animal Animal1;
	// Animal Animal2("Animal2");
	// Cat Cat1;
	// Cat Cat2("Cat2");
	// Dog Dog1;
	// Dog Dog2("Dog2");

	// std::cout << Animal1.getType() << " " << std::endl;
	// std::cout << Animal2.getType() << " " << std::endl;
	// std::cout << Cat1.getType() << " " << std::endl;
	// std::cout << Cat2.getType() << " " << std::endl;
	// std::cout << Dog1.getType() << " " << std::endl;
	// std::cout << Dog2.getType() << " " << std::endl;

	// Animal1.makeSound();
	// Animal2.makeSound();
	// Cat1.makeSound();
	// Cat2.makeSound();
	// Dog1.makeSound();
	// Dog2.makeSound();
	
	// Wrong Animal and Cat tests.
	const WrongAnimal* i = new WrongCat();

	i->makeWrongSound(); //will output the animal sound!

	delete i;
	// return 0;
}