/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/11 22:16:40 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <string>
#include <iostream>

template <typename T>
T iter(T *arr, size_t len, void(*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
};

template <typename T>
T print_elements(t const &elem)
{
	std::cout << *elem << std::endl;
}

#endif