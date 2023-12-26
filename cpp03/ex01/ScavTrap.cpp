/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:14:48 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/26 15:34:59 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "noname";
	this->_attackDamage = 20;
	this->_energy_p = 50;
	this->_hit_p = 100;
	std::cout << "ScavTrap default constructor with name "<< green << this->_name << white << " called."<< std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_attackDamage = 20;
	this->_energy_p = 50;
	this->_hit_p = 100;
	std::cout << "ScavTrap constructor with name "<< green << this->_name << white << " called."<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor with name "<< red << this->_name << white << " called."<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap &another)
{
	*this = another;
	std::cout << "ScavTrap copy constructor called with name -" << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &another)
{
	this->_name = another._name;
	this->_hit_p = another._hit_p;
	this->_energy_p = another._energy_p;
	this->_attackDamage = another._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate()
{
	if ( this->_hit_p && this->_energy_p )
		std::cout << "ScavTrap "<< cyan << this->_name << white << " is under a guard gate."<< std::endl;
	else
		std::cout << "ScavTrap "<< red << this->_name << white << " can't be under a guard gate."<< std::endl;
}

void	ScavTrap::attack( std::string name )
{
	if ( this->_hit_p && this->_energy_p )
	{
		std::cout << "ScavTrap "<< cyan << this->_name << white << " attacking " << name << "!" << std::endl;
		this->_energy_p--;
		std::cout << "Energy left: "<< _energy_p << std::endl;
	}
	else
		std::cout << "ScavTrap "<< red << this->_name << white << " don't attacking, because he is tired. " << std::endl;
}