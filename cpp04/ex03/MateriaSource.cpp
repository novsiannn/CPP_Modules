/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:07:01 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/17 11:28:33 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_index = 0;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
		{
			delete _source[i];
			_source[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(MateriaSource &src)
{
	*this = src;
}

MateriaSource   &MateriaSource::operator=(MateriaSource &src)
{
	int _index = src._index;

	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i])
			delete this->_source[i];
		this->_source[i] = src._source[i];
	}
	return ( *this );
}

void MateriaSource::learnMateria(AMateria* src)
{
	if(_index < 4)
	{
		this->_source[_index] = src->clone();
		_index++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _index; i++)
	{
		if (_source[i]->getType() == type)
			return _source[i]->clone();
	}
	return NULL;
}