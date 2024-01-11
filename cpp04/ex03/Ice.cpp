/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:29:55 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/11 20:25:12 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called." << std::endl;
	_type = "ice";
}

Ice::Ice( std::string const &type )
{
	std::cout << "Ice constructor called." << std::endl;
	_type = "ice";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice::Ice(const Ice &another)
{
	std::cout << "Ice copy constructor called." << std::endl;
	*this = another;
}

Ice &Ice::operator=(Ice const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
    std::cout << "Ice copy operator called.\n";
    return(*this);
}

AMateria *Ice::clone() const
{
	Ice *tmp = new Ice();
	tmp->_type = this->_type;
	return tmp;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}