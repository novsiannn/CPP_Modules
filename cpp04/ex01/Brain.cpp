/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:50:55 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 15:30:58 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_index = 1;
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
	for (int i = 0; i < another._index; i++)
	{
		if (!another._ideas[i].empty())
			this->_ideas[i] = another._ideas[i];
		i++;
	}
	return ( *this );
}
