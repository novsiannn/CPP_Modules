/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:38:18 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/27 12:46:52 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "noname";
	this->_hit_p = this->FragTrap::_hit_p;
	this->_energy_p = this->ScavTrap::_energy_p;
	this->_attackDamage = this->FragTrap::_attackDamage;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name)
{
	this->_name = name;
	this->_hit_p = this->FragTrap::_hit_p;
	this->_energy_p = this->ScavTrap::_energy_p;
	this->_attackDamage = this->FragTrap::_attackDamage;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap constructor with name " << green << name << white << " called!" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap &another )
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = another;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &another)
{
	this->_name = another._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = another._attackDamage;
	this->_energy_p = another._energy_p;
	this->_hit_p = another._hit_p;
	std::cout << "DiamondTrap assignment operator constructor with name " << green << this->_name << white << " called!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default destructor DiamondTrap " << red << this->_name << white << " called!"  << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap with name - "<< cyan << this->_name << white;
	std::cout << " and I am ClapTrap with name - "<< cyan << this->ClapTrap::_name << white << std::endl;;
}
