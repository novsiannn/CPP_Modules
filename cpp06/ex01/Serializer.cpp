/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:10:58 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 09:35:40 by nikitos          ###   ########.fr       */
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

// uintptr_t serialize( Data *ptr )
// {

// }

// Data* deserialize( uintptr_t raw )
// {

// }