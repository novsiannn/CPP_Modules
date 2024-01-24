/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:54:45 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/24 11:08:59 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default_name")
{
	std::cout << "Default constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name)
{

	std::cout << "Constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			grade = _grade;
			std::cout << "Bureaucrat is created with grade - " << getGrade() << std::endl;
		}
	}
	catch(const std::exception &er)
	{
		std::cout << "Exception thrown: " << er.what() << std::endl;
		_grade = 150;
	}
}

void	Bureaucrat::incrementGrade()
{

}

void	Bureaucrat::decrementGrade()
{

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src._grade;
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return ( this->_name );
}

int	Bureaucrat::getGrade() const
{
	return ( this->_grade );
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

std::ostream& operator<<(std::ostream& os,  Bureaucrat const &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return os;
}