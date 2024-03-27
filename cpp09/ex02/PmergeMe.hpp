/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:31:58 by nikitos           #+#    #+#             */
/*   Updated: 2024/03/27 16:56:51 by novsiann         ###   ########.fr       */
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
		int							_last;
		typedef std::pair<int, int>	type_pair;
	public:
		PmergeMe();
		PmergeMe(char **av);
		~PmergeMe();
		PmergeMe(PmergeMe const &src );
		PmergeMe &operator=(PmergeMe const &src );
		std::vector<int>				jacobsthal_sequence(size_t size);
		typename std::vector<typename	PmergeMe<Container>::type_pair> mergesort_pairs();
		void	mainSort();
		void	printValue();
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