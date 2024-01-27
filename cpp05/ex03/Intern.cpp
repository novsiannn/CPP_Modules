/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:48:11 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/27 22:00:23 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor is called" << std::endl;
	_target = "default_target";
}

Intern::~Intern()
{
	std::cout << "Intern destructor is called" << std::endl;
}

Intern::Intern( Intern const &src )
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
    _target = src.getTarget();
	return *this;
}

AForm *makeForm( std::string name, std::string target )
{
	std::string arr[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i = 0;
	
	while(arr[i])
	{
		if (arr[i] == name)
		{
		
		}
		i++;
	}
}