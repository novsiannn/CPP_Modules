/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:05:13 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/24 15:22:22 by novsiann         ###   ########.fr       */
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
		throw TooManyElements();
	this->_container.push_back(add_n);
}

int				Span::getContainerElement(unsigned int i){
	return this->_container[i];
}

unsigned int	Span::getContainerSize(){
	return this->_container.size();
}

const char *Span::TooManyElements::what() const throw()
{
	return "Container is full!";
}

const char *Span::IncorrectContainer::what() const throw()
{
	return "Container is incorrect!";
}

int	Span::shortestSpan()
{
	if (this->getContainerSize() <= 1)
		throw IncorrectContainer();

	int res = std::numeric_limits<int>::max();

	std::vector<int> tmp = _container;
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++)
	{
		if (*(it + 1) - *it < res)
			res = *(it + 1) - *it;
	}
	return res;
}

int	Span::longestSpan()
{
	if (this->getContainerSize() <= 1)
		throw IncorrectContainer();
	int max = *std::max_element(this->_container.begin(), this->_container.end());	
	int min = *std::min_element(this->_container.begin(), this->_container.end());
	return ( max - min );
}

void			Span::fillContainer(unsigned int n, int min, int max)
{
	if (n > this->_maxSize)
		throw TooManyElements();
	std::srand(static_cast<unsigned int>(time(0)));
	for (unsigned int i = 0; i < n; i++)
		this->_container.push_back(std::rand() % (max - min) + min);
}