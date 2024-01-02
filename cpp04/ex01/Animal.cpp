/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:12:17 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/31 12:09:00 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
	_type = "Animal";
}

Animal::Animal( std::string name )
{
	std::cout << "Animal default constructor called." << std::endl;
	_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &another)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = another;
}

Animal &Animal::operator=(Animal const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	std::cout << "copy asignment operator called." << std::endl;
	return (*this);
}

std::string Animal::getType( void ) const
{
	return _type;
}

void	Animal::makeSound( void ) const
{
		std::cout << "OINK OINK I AM AN ANIMAL." << std::endl;
}
