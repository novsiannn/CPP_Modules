/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:35:25 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/02 14:58:55 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_brain = new Brain();
	_type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog constructor called." << std::endl;
	this->_brain = new Brain();
	_type = "Dog";
}

Dog::~Dog()
{
	if( this->_brain)
		delete this->_brain;
	this->_brain = NULL;
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &another)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = another;
}

Dog &Dog::operator=(Dog const &another)
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
	return (*this);
}

void	Dog::makeSound( void ) const
{
		std::cout << "BARK BARK GIVE ME A BEEF." << std::endl;
}