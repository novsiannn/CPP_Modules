/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/27 16:56:54 by novsiann         ###   ########.fr       */
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

int main( int ac, char **av ) 
{
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
	
	PmergeMe<std::vector<int> > vec(av + 1);
	PmergeMe<std::deque<int> > deq(av + 1);
	vec.mainSort();
	deq.printValue();

	// test();
	// deq.printValue();
	
	return 0;
}