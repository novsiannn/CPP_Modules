/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/25 22:07:56 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	check_input(char **av)
{
	size_t res;
	std::string str;

	for(int i = 1; av[i]; i++)
	{
		str = av[i];
		res = str.find_first_not_of("0123456789 ");
		if (res != std::string::npos)
			throw IncorrectInput();
	}
}

template <typename Container>
void	PmergeMe<Container>::mainSort(char **av)
{
	int i = 1;

	if (_data.empty())
		_data.push_back(std::stoi(av[i++]));
	while (av[i])
	{
		
		i++;
	}
}

template <typename Container>
void	PmergeMe<Container>::printValue()
{
	for (typename Container::iterator it = _data.begin(); it != _data.end(); it++)
	{
		std::cout << *it << "| " << std::endl;
	}
	
}

int main( int ac, char **av ) 
{
	(void)ac;
	if (ac < 2)
	{
		std::cout << "Error: no arguments" << std::endl;
		return 1;
	}
	try
	{
		check_input(av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	PmergeMe<std::vector<int> > vec;
	PmergeMe<std::deque<int> > deq;
	// vec.mainSort(av);
	deq.mainSort(av);
	// vec.printValue();
	deq.printValue();
	
	return 0;
}