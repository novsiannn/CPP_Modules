/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:48:11 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/28 11:22:13 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

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

AForm *Intern::makeForm( std::string name, std::string target )
{
	std::string arr[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *(Intern::*func_p[3])(std::string) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePardonForm};
	int i = 0;
	
	while(i < 3)
	{
		if (arr[i] == name)
		{
			std::cout << "Intern creates new form " << name << std::endl;
			return ((this->*func_p[i])(target));
		}
		i++;
	}
	std::cout << "Form name is incorrect" << std::endl;
	return ( NULL );
}

AForm       *Intern::makeShrubberyForm( std::string target )
{
	return ( new ShrubberyCreationForm( target ));
}

AForm       *Intern::makeRobotomyForm( std::string target )
{
	return ( new RobotomyRequestForm( target ));
}
AForm       *Intern::makePardonForm( std::string target )
{
	return ( new PresidentialPardonForm( target ));
}

std::string	Intern::getTarget() const
{
	return ( _target );
}