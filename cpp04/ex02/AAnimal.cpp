/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:12:17 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 14:36:09 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called." << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal( std::string name )
{
	std::cout << "AAnimal default constructor called." << std::endl;
	_type = "AAnimal";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &another)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = another;
}

AAnimal &AAnimal::operator=(AAnimal const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	std::cout << "copy asignment operator called." << std::endl;
	return (*this);
}

std::string AAnimal::getType( void ) const
{
	return _type;
}

void	AAnimal::makeSound( void ) const
{
		std::cout << "OINK OINK I AM AN ANIMAL." << std::endl;
}
