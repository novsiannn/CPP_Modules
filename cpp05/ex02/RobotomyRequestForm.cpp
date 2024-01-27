/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:07:25 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/27 19:07:43 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor is called" << std::endl;
	_target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm( std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor is called" << std::endl;
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
    this->setSignBool(src.getSign());
    _target = src.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return ( this->_target );
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	try
	{
		if ( !this->getSign() )
            throw RobotomyRequestForm::UnsignedForm();
		else
		{
			std::cout << "Some drilling noises..." << std::endl;
			int x = time(0);
			srand(x);
			if (rand() % 2 == 0)
				std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
			else
				std::cout << this->getTarget() << " robotomy failed. Try one more time! :D" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char *RobotomyRequestForm::UnsignedForm::what() const throw()
{
    return "An unsigned form cannot be robotized!";
}
