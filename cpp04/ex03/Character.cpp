/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:49:36 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/17 10:55:59 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

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
		if (this->_inventory[i])
            delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i];
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

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
    {
        std::cout << "empty Materia. Check MateriaSource.\n";
        return ;
    }
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "Inventory is already full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
		std::cout << "This index in invalid.\n";
	if (!_inventory[idx])
		std::cout << "This index of inventory is already empty.\n";
	else
        _inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 4 || idx < 0)
    {
        std::cout << "Invalid idx in use.\n";
        return ;
    }
    if (_inventory[idx])
        _inventory[idx]->use(target);
    else
        std::cout << "Not valid Materia!\n";
}

AMateria    *Character::getInventoryItem(int i)
{
	return ( this->_inventory[i] );
}