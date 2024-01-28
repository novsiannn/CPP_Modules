/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:25:03 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 21:58:19 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
	_target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor is called" << std::endl;
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
    this->setSignBool(src.getSign());
    _target = src.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return ( this->_target );
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if ( !this->getSign() )
	    throw PresidentialPardonForm::UnsignedForm();
	else if (executor.getGrade() > this->getGradeExec())
		throw PresidentialPardonForm::GradeTooLowException();
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

const char *PresidentialPardonForm::UnsignedForm::what() const throw()
{
    return "An unsigned form can't been pardoned by Zaphod Beeblebrox.!";
}