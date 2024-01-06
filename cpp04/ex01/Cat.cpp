/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:37:20 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/04 13:12:58 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat constructor called." << std::endl;
	this->_brain = new Brain();
	_type = "Cat";
}

Cat::~Cat()
{
	if( this->_brain)
		delete this->_brain;
	this->_brain = NULL;
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &another) : Animal(another)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = another;
}

Cat &Cat::operator=(Cat const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
    std::cout << "Dog copy operator called.\n";
    _brain = new Brain();
    _brain = another._brain;
    return(*this);
}

void	Cat::makeSound( void ) const
{
		std::cout << "MEOW MEOW BLYAT GIVE ME WHISKAS." << std::endl;
}

void	Cat::think( std::string thoughts ) const
{
	this->_brain->addThought( thoughts );
}

std::string	Cat::recall( int i ) const
{
	// std::cout << this->_brain->getIndex() << std::endl;
	if ( i < this->_brain->getIndex() && i >= 0)
	{
		std::cout << "Cat: ";
		return ( _brain->getMemory(i) );	
	}
	else
		return ("I'm Cat and my brain can not think so much");
}
