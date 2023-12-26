/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:24:11 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/26 18:50:16 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "noname";
	this->_attackDamage = 30;
	this->_energy_p = 100;
	this->_hit_p = 100;
	std::cout << "FragTrap default constructor with name "<< green << this->_name << white << " called."<< std::endl;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_attackDamage = 30;
	this->_energy_p = 100;
	this->_hit_p = 100;
	std::cout << "FragTrap constructor with name "<< green << this->_name << white << " called."<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor with name "<< red << this->_name << white << " called."<< std::endl;
}

FragTrap::FragTrap( const FragTrap &another )
{
	*this = another;
	std::cout << "FragTrap copy constructor called with name -" << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &another)
{
	this->_name = another._name;
	this->_hit_p = another._hit_p;
	this->_energy_p = another._energy_p;
	this->_attackDamage = another._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	if (this->_energy_p && this->_hit_p)
		std::cout << "FragTrap " << this->_name << " gives a high five!" << std::endl;
	else
		std::cout << "FragTrap " << cyan << this->_name << white <<" can not give a five :(" << std::endl;
}