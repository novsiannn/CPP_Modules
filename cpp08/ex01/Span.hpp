/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/24 15:22:45 by novsiann         ###   ########.fr       */
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
		int				shortestSpan();
		int				longestSpan();
		int				getContainerElement(unsigned int i);
		unsigned int	getContainerSize();
		void			fillContainer(unsigned int n, int min, int max);
		class TooManyElements : public std::exception{
			public:
				const char *what() const throw();
		};
		class IncorrectContainer : public std::exception{
			public:
				const char *what() const throw();
		};
	private:
		unsigned int		_maxSize;
		std::vector<int>	_container;
};

#endif