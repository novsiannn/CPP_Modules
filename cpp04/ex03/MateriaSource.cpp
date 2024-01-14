/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:07:01 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/14 15:34:06 by novsiann         ###   ########.fr       */
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

MateriaSource::MateriaSource(MateriaSource const &src)
{
}

MateriaSource   &MateriaSource::operator=(MateriaSource &src)
{
}
