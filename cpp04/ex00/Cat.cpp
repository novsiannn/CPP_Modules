/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:37:20 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/31 12:09:29 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat constructor called." << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
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
	std::cout << "Cat copy asignment operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
		std::cout << "MEOW MEOW BLYAT GIVE ME WHISKAS." << std::endl;
}