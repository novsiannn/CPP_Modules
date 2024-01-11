/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:25:12 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/11 20:39:37 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called." << std::endl;
	_type = "cure";
}

Cure::Cure( std::string const &type )
{
	std::cout << "Cure constructor called." << std::endl;
	_type = "cure";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

Cure::Cure(const Cure &another)
{
	std::cout << "Cure copy constructor called." << std::endl;
	*this = another;
}

Cure &Cure::operator=(Cure const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
    std::cout << "Ice copy operator called.\n";
    return(*this);
}

AMateria *Cure::clone() const
{
	Cure *tmp = new Cure();
	tmp->_type = this->_type;
	return tmp;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() <<"/’s wounds *" << std::endl;
}