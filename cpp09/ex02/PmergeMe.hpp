/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:31:58 by nikitos           #+#    #+#             */
/*   Updated: 2024/03/25 18:52:20 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <ctime>
#include <vector>
#include <deque>

template <typename Container>
class PmergeMe {
	public:
		PmergeMe(){};
		~PmergeMe(){};
		PmergeMe(PmergeMe const &src );
		PmergeMe &operator=(PmergeMe const &src );
		void	mainSort(char **av);
		void	printValue();
	private:
		Container _data;
};

class DuplicateInt : public std::exception
{
	const char *what() const throw()
	{
		return ("Error: duplicate of numbers!");
	}
};

class IncorrectInput : public std::exception
{
	const char *what() const throw()
	{
		return ("Error: incorrect input!");
	}
};

#endif
