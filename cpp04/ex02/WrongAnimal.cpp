/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:34:53 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/31 12:39:01 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( std::string name )
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &another)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = another;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	std::cout << "copy asignment operator called." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType( void ) const
{
	return _type;
}

void	WrongAnimal::makeWrongSound( void ) const
{
		std::cout << "OINK OINK I AM A WrongAnimal." << std::endl;
}