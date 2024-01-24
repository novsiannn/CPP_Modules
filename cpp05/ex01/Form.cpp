/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:34:30 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/24 21:04:40 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default_name")
{
	std::cout << "Form default constructor called" << std::endl;
	_sign = false;
	_grade = 150;
}

Form::Form( std::string name, int grade) : _name(name)
{
	_sign = false;
	std::cout << "Form constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		else if (grade > 150)
			throw Form::GradeTooLowException();
		else
		{
			_grade = grade;
			std::cout << "Form is created with grade - " << getGrade() << std::endl;
		}
	}
	catch(const std::exception &er)
	{
		std::cout << "Creation exception thrown: " << er.what() << std::endl;
		std::cout << "Grade set to 150 like a default value." << std::endl;
		_grade = 150;
	}
}

Form::~Form()
{
	std::cout << "Destructor is called" << std::endl;
}

Form::Form(Form const &src) : _name(src.getName())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form &Form::operator=(Form const &src)
{
	if (this == &src)
		return *this;
	_grade = src.getGrade();
	this->_sign = src.getSign();
	std::cout << "Form copy assignment constructor called" << std::endl;
	return *this;
}

const char 	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Form	::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

std::ostream& operator<<(std::ostream &os, const Form &src)
{
	os << "--- You are requested information about Form ---" << std::endl;
	os << "-> Name: "<< src.getName() << std::endl;
	os << "-> Grade: " << src.getGrade() << std::endl;
	os << "-> Sign: " << src.getSign() << std::endl;
	os << "------------------------------------------------" << std::endl;
	return ( os );
}

std::string	Form::getName() const
{
	return ( this->_name );
}

int	Form::getGrade() const
{
	return ( this->_grade );
}

bool	Form::getSign() const
{
	return ( this->_sign );
}