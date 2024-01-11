/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:49:36 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/11 21:32:13 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "default_name_character";
	setInventoryAll(NULL);
}

Character::Character(std::string name)
{
	this->_name = name;
	setInventoryAll(NULL);
}

Character::Character(Character &src)
{
	*this = src;
}

Character   &Character::operator=(Character &src)
{
	int i = 0;

	this->_name = src.getName();
	while (i < 4)
	{
		this->_inventory[i] = src._inventory[i]; // mb here clone func try to use
		i++;
	}

	return ( *this );
}

Character::~Character()
{
	int i = 0;

	while (i < 4)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		i++;
	}
}

void	Character::setInventoryAll(AMateria *mat)
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = mat;
		i++;
	}
}

std::string const &Character::getName() const
{
	return ( this->_name );
}

void	Character::setName(std::string name)
{
	this->_name = name;
}