/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:54:45 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/27 20:49:40 by novsiann         ###   ########.fr       */
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
			_grade = grade;
			std::cout << "Bureaucrat is created with grade - " << getGrade() << std::endl;
		}
	}
	catch(const std::exception &er)
	{
		std::cout << "Creation exception thrown: " << er.what() << std::endl;
		std::cout << "Grade set to 150 like a default value." << std::endl;
		_grade = 150;
	}
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if(this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		else
		{
			this->_grade--;
			std::cout << "Increment for: " << this->getName() << " current grade is: " << this->getGrade() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught an incrementation error: " << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if(this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->_grade++;
			std::cout << "Decrement for: " << this->getName() << " was succesfull, current grade is: " << this->getGrade() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught a decrementation error: " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this == &src)
		return *this;
	_grade = src._grade;
	std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
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
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return os;
}

