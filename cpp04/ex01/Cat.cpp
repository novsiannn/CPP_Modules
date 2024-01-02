/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:37:20 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/02 14:58:05 by novsiann         ###   ########.fr       */
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

Cat::Cat(const Cat &another)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = another;
}

Cat &Cat::operator=(Cat const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	if ( this->_brain )
	{
		delete this->_brain;
		this->_brain = NULL; 
	}
	this->_brain = new Brain();
	*this->_brain = *another._brain;
	std::cout << "Cat copy asignment operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
		std::cout << "MEOW MEOW BLYAT GIVE ME WHISKAS." << std::endl;
}