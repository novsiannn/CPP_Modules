/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/24 09:37:21 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <string>
#include <iostream>
#include <vector>

class Span
{
	public:
		Span();
		Span (unsigned int n);
		~Span();
		Span (Span const &src);
		Span &operator=(Span const &src);
		void			addNumber(unsigned int add_n);
		int				getContainerElement(unsigned int i);
		unsigned int	getContainerSize();
	private:
		unsigned int		_maxSize;
		std::vector<int>	_container;
};

#endif