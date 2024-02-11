/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:10:58 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 11:34:33 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer default constructor is called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor is caled" << std::endl;
}

Serializer::Serializer( Serializer const &src )
{
	std::cout << "Serializer copy constructor is caled" << std::endl;
	*this = src;
}

Serializer &Serializer::operator=(Serializer const &src )
{
	std::cout << "Serializer copy assignment is caled" << std::endl;
	(void)src;
	return (*this);
}

uintptr_t Serializer::serialize( Data *ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data*>(raw);
}