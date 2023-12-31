/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:35:25 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/31 12:09:34 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog constructor called." << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
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
	std::cout << "Dog copy asignment operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const
{
		std::cout << "BARK BARK GIVE ME A BEEF." << std::endl;
}