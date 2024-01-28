/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:54:45 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/28 21:48:40 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default_name")
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name)
{

	std::cout << "Bureaucrat constructor called" << std::endl;
	
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

void	Bureaucrat::incrementGrade()
{

	if(this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << "Increment for: " << this->getName() << " current grade is: " << this->getGrade() << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if(this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << "Decrement for: " << this->getName() << " was succesfull, current grade is: " << this->getGrade() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor is called" << std::endl;
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

void		Bureaucrat::signForm(Form &form)
{
	if(form.getSign() == 1)
		throw Form::AlreadySigned();
	else if (form.getCorrectCreation())
		throw Form::incorrectCreation();
	else
	{
		form.beSigned(*this);
		if (this->getGrade() < form.getGradeSign())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}	
}