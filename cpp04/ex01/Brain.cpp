/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:50:55 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 19:49:47 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_index = 0;
	std::cout << "Brain default constructor is called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called." << std::endl;
}

Brain::Brain( Brain const &another )
{
	*this = another;
	std::cout << "Brain copy constructor is called." << std::endl;
}

Brain &Brain::operator=( Brain const &another )
{
	this->_index = another._index;
	for (int i = 0; i < another.getIndex(); i++)
	{
		if (!another._ideas[i].empty())
			this->_ideas[i] = another._ideas[i];
		i++;
	}
	return ( *this );
}

int	Brain::getIndex( void ) const
{
	return this->_index;
}

void Brain::addThought( std::string thought )
{
	if (this->_index >= 100)
	{
		std::cout << "Brain is full and can not think more :D" << std::endl;
		return ;
	}
	this->_ideas[this->_index] = thought;
	this->_index++;
}

std::string	Brain::getMemory( int i ) const
{
	return this->_ideas[i];
}