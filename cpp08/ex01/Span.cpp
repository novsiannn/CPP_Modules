/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:05:13 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/24 09:39:00 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0){}
Span::Span(unsigned int n) : _maxSize(n){}
Span::~Span(){}

Span::Span(Span const &src){
	*this = src;
}

Span &Span::operator=(Span const &src){
	if (this != &src)
	{
		_maxSize = src._maxSize;
		_container = src._container;
	}
	return *this;
}

void Span::addNumber(unsigned int add_n){
	if(this->_container.size() >= this->_maxSize)
	{
		std::cout << "More then size" << std::endl;
		exit(0);
	}
	this->_container.push_back(add_n);
}

int				Span::getContainerElement(unsigned int i){
	return this->_container[i];
}

unsigned int	Span::getContainerSize(){
	return this->_container.size();
}