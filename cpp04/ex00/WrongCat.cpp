/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:39:07 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/13 15:05:42 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called." << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat constructor called." << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &another)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = another;
}

WrongCat &WrongCat::operator=(WrongCat const &another)
{
	if (this == &another)
		return *this;
	this->_type = another.getType();
	std::cout << "WrongCat copy asignment operator called." << std::endl;
	return (*this);
}

void	WrongCat::makeWrongSound( void ) const
{
		std::cout << "WrongCat meow meow GIVE ME WHISKAS." << std::endl;
}