/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/29 14:21:05 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int checkAlreadySorted(std::vector<int> base)
{
    if (base.size() < 2)
        return 1;

    std::vector<int>::iterator it = base.begin();
    int res = 0;

    while (it != base.end() - 1)
    {
        if (*it >= *(it + 1))
        {
            res = 1;
            break;
        }
        it++;
    }
    return res;
}

void	checkDoubleAppearance(char **av)
{
    int i = 0;
	int value = 0;
	std::vector<int>	base;

	// Reading args and put them in vector
    while(av[i])
    {
		std::istringstream iss(av[i]);
		while (iss >> value)
		{
			if (value > 0)
				base.push_back(value);
			else
				throw IncorrectInput();
		}
		i++;
    }
	std::vector<int>::iterator main_it = base.begin();
	while (main_it != base.end())
	{
		std::vector<int>::iterator check_it = base.begin();
		while (check_it != main_it)
		{
			if (*check_it == *main_it)
				throw DuplicateInt();
			check_it++;
		}
		main_it++;
	}
	if(!checkAlreadySorted(base))
	{
		std::cout << "Already sorted" << std::endl;
		exit(0);
	}
}

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
	checkDoubleAppearance(av);
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
		exit(0);
	}
	
	PmergeMe<std::vector<int> > vec(av + 1);
	PmergeMe<std::deque<int> > deq(av + 1);
	std::cout << "Before: " ;
	vec.printValue();
	vec.mainSort();
	deq.mainSort();
	
	std::cout << "After: " ;
	vec.printValue();
	
	std::cout << vec.getOutputWithSize() << "std::<vector> : " << std::fixed << std::setprecision(6) << vec.getTime() << " us" << std::endl;
	std::cout << deq.getOutputWithSize() << "std::<deque> : " << std::fixed << std::setprecision(6) << deq.getTime() << " us" << std::endl;
	
	return 0;
}