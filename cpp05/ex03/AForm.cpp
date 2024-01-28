/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:34:30 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/28 15:20:22 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default_name"), _gradeSign(1) , _gradeExec(1) , _sign(false), _correctCreation(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm( std::string name, int gSign, int gExec ) : _name(name), _gradeSign(gSign) , _gradeExec(gExec) , _sign(false), _correctCreation(0)
{
	std::cout << "AForm constructor called" << std::endl;
	try
	{
		if (gSign < 1 || gExec < 1)
			throw AForm::GradeTooHighException();
		else if (gSign > 150 || gExec > 150)
			throw AForm::GradeTooLowException();
		else
		{
			std::cout << "AForm creation with name: " << _name << " and grade sign: "<< _gradeSign;
			std::cout << " and also with grade exec: " << _gradeExec << " is made !" << std::endl;
		}
	}
	catch(const std::exception &er)
	{
		std::cout << "Creation exception thrown: " << er.what() << std::endl;
		_correctCreation = 1;
	}
}

AForm::~AForm()
{
	std::cout << "AForm destructor is called" << std::endl;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _gradeExec(src.getGradeExec()), _gradeSign(src.getGradeSign()), _correctCreation(src.getCorrectCreation())
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
}

AForm &AForm::operator=(AForm const &src)
{
	if (this == &src)
		return *this;
	this->_sign = src.getSign();
	std::cout << "AForm copy assignment constructor called" << std::endl;
	return *this;
}

const char 	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*AForm	::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char 	*AForm::AlreadySigned::what() const throw()
{
	return "Already signed!";
}

const char 	*AForm::incorrectCreation::what() const throw()
{
	return "Incorrect form creation :( ";
}

std::ostream& operator<<(std::ostream &os, const AForm &src)
{
	os << "--- You are requested information about AForm ---" << std::endl;
	os << "-> Name: "<< src.getName() << std::endl;
	os << "-> Grade sign: " << src.getGradeSign() << std::endl;
	os << "-> Grade execution: " << src.getGradeExec() << std::endl;
	os << "-> Sign: " << src.getSign() << std::endl;
	os << "------------------------------------------------" << std::endl;
	return ( os );
}

std::string	AForm::getName() const
{
	return ( this->_name );
}

int	AForm::getGradeSign() const
{
	return ( this->_gradeSign );
}

int			AForm::getGradeExec() const
{
	return ( this->_gradeExec );
}

bool	AForm::getSign() const
{
	return ( this->_sign );
}

int	AForm::getCorrectCreation() const
{
	return ( this->_correctCreation );
}

void	AForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (this->_sign == 1)
			throw AForm::AlreadySigned();
		else if (this->getCorrectCreation())
			throw AForm::incorrectCreation();
		else if (obj.getGrade() > this->getGradeSign())
			throw AForm::GradeTooLowException();
		else
			this->_sign = true;
	}
	catch( const std::exception& e )
	{
		std::cout << "Can not be sign because: " << e.what() << std::endl;
	}
}

void				AForm::setSignBool(bool sign)
{
	this->_sign = sign;
}