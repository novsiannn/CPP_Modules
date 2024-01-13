/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:37:20 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/13 18:49:18 by novsiann         ###   ########.fr       */
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
	if( _brain )
		delete _brain;
	this->_brain = NULL;
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &another)
{
	*this = another;
    *_brain = *another._brain;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	if (_brain == NULL)
		_brain = new Brain;
    *_brain = *another._brain;
    std::cout << "Cat copy operator called.\n";
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
	if ( i < this->_brain->getIndex() && i >= 0)
	{
		std::cout << "Cat: ";
		return ( _brain->getMemory(i) );	
	}
	else
		return ("I'm Cat and my brain can not think so much");
}
