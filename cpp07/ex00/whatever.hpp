/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/11 22:01:12 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <string>
#include <iostream>

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
};

template <typename T> 
T min(T x, T y)
{
	if (x < y)
		return x;
	else
		return y;
};

template <typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

#endif