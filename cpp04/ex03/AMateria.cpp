/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:51:57 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 18:40:03 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called." << std::endl;
	_type = "default_AMateria_type";
}

AMateria::AMateria( std::string const &type )
{
	std::cout << "AMateria constructor called." << std::endl;
	_type = "default_AMateria_type";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria(const AMateria &another)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = another;
}

AMateria &AMateria::operator=(AMateria const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
    std::cout << "AMateria copy operator called.\n";
    return(*this);
}

std::string const &AMateria::getType() const
{
	return ( this->_type );
}