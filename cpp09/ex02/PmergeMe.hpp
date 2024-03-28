/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:31:58 by nikitos           #+#    #+#             */
/*   Updated: 2024/03/28 22:57:15 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstring>
# include <climits>
# include <cstdlib>
# include <sstream>
# include <deque>
# include <ctime>
# include <iomanip>

template <typename Container>
class PmergeMe {
	private:
		Container					_data;
		double						_time;
		int							_last;
		typedef std::pair<int, int>	type_pair;
	public:
		PmergeMe();
		PmergeMe(char **av);
		~PmergeMe();
		PmergeMe(PmergeMe const &src );
		PmergeMe &operator=(PmergeMe const &src );
		int								binary_search(int target);
		void							insertsort_pairs(std::vector<type_pair> &pair);
		void							mainSort();
		void							printValue();
		double							getTime();
		std::string						getOutputWithSize();
		std::vector<int>				jacobsthal_sequence(size_t size);
		typename std::vector<typename	PmergeMe<Container>::type_pair> mergesort_pairs();
};

class DuplicateInt : public std::exception
{
	const char *what() const throw();
};

class IncorrectInput : public std::exception
{
	const char *what() const throw();
};

#endif