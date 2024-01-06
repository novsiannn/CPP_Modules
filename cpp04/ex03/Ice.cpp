/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:29:55 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 18:50:11 by novsiann         ###   ########.fr       */
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
