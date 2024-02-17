/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/17 15:54:49 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &src);
		Array &operator=(Array const &src);
		int	size() const;
		T &operator[](unsigned int i);
		class OutOfBounds : public std::exception
		{
			const char *what() const throw()
			{
				return ("Wrong index.");
			}
		};
	private:
		T				*_arr;
		unsigned int	_n;
};

template<typename T>
Array<T>::Array() : _arr(NULL), _n(0)
{
	std::cout << "Default constructor is called." << std::endl; 
}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _n(n)
{
	for (unsigned int i = 0; i < n; i++)
		_arr[i] = T();
	std::cout << "Constructor is called. Length of array is " << n << std::endl; 
}

template<typename T>
Array<T>::Array(Array const &src) : _arr(NULL)
{
	*this = src;
}

template<typename T>
Array<T> &Array<T>::operator=(Array    const &src)
{	
	if (this != &src)
	{
		delete[] _arr;
		_arr = new T[src.size()];
		_n = src.size();
		for( unsigned int i = 0; i < _n; i++)
			_arr[i] = src._arr[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Default destructor is called." << std::endl;
	if (_arr)
		delete[] _arr;
}

template<typename T>
int	Array<T>::size() const
{
	return (_n);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if(i >= this->_n || i < 0)
		throw OutOfBounds();
	return (_arr[i]);
}

#endif