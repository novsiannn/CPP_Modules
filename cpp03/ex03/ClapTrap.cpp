/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:26:31 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/27 11:54:22 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "noname";
	this->_attackDamage = 0;
	this->_hit_p = 10;
	this->_energy_p = 10;
	std::cout << "ClapTrap default constructor called." << std::endl;;
}

ClapTrap::ClapTrap(std::string name)
{
	if ( name.empty() )
		this->_name = "noname";
	else
		this->_name = name;
	this->_attackDamage = 0;
	this->_hit_p = 10;
	this->_energy_p = 10;
	std::cout << "Constructor ClapTrap called with name - "<< green << this->_name << white <<" called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor ClapTrap called with name - "<< red << this->_name << white <<" called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &another)
{
	*this = another;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &another)
{
	this->_attackDamage = another._attackDamage;
	this->_energy_p = another._energy_p;
	this->_hit_p = another._hit_p;
	this->_name = another._name;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if ( this->_energy_p <= 0 )
	{
		std::cout << "ClapTrap " << _name << " does not have enough energy to attack." << std::endl;
		return ;
	}
	else if ( this->_hit_p <= 0 )
	{
		std::cout << _name << " does not have enough hit points to attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << green << _name << white <<" attacking "<< red << target << white <<", with a " << _attackDamage << " damage points." << std::endl;
	this->_energy_p--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ( this->_energy_p <= 0 )
	{
		std::cout << "ClapTrap " << _name << " has zero energy points and he is dead" << std::endl;
		return ;
	}
	else if ( this->_hit_p <= 0 )
	{
		std::cout << "ClapTrap " << _name << " does not have enough hit points to repair." << std::endl;
		return ;
	}
	this->_hit_p += amount;
	this->_energy_p--;
	std::cout << "ClapTrap " << _name << " repaired and got " << amount << " hit points." << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ( this->_energy_p <= 0 )
	{
		std::cout << "ClapTrap " << _name << " has zero energy points and he is dead. Can not take damage because of 0 energy_p." << std::endl;
		return ;
	}
	else if ( this->_hit_p <= 0 )
	{
		std::cout << "ClapTrap " << _name << " is already dead, so he can not take damage points because of 0 hit_p." << std::endl;
		return ;
	}
	if (this->_hit_p < amount)
		this->_hit_p = 0;
	else
		this->_hit_p -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " of damage points." << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return this->_name;
}
