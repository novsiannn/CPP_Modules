/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/17 10:38:01 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <string>
#include <iostream>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &src);
		Array &operator=(Array const &src);
	private:
		T				*_arr;
		unsigned int	_n;
};

template<typename T>
Array<T>::Array() : _arr(NULL), _n(0)
{
	std::cout << "Default constructor is called." << std::endl; 
};

template<typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	if (_arr)	
		delete _arr;
	_arr = new T(n);
	std::cout << "Constructor is called. Length of array is " << n << std::endl; 
};

template<typename T>
Array<T>::~Array()
{
	std::cout << "Default destructor is called." << std::endl; 
};

#endif