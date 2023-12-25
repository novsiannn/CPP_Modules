/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:26:31 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/25 19:48:40 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	if (this->_name.empty())
		this->_name = "Unknown name";
	std::cout << "Default constructor called with name - "<< this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor called with name - "<< name << " called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called with name - "<< this->_name << " called" << std::endl;
}