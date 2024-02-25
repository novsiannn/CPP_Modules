/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/23 11:34:36 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main( void ) 
{
	std::vector<int> test1;
	srand((unsigned)time(0));

	for(int i = 0; i < 10; i++)
	{
		test1.push_back((i + 1) * 2);
	}
	
	
	for (unsigned long int i = 0; i < test1.size(); i++)
	{
		std::cout << test1[i] << " ";
	}

	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator result = easyfind(test1, 20);
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

// Test with deque
	
    std::deque<int> intDeque;

    for (int i = 0; i < 50; i++)
	{
        intDeque.push_back(std::rand() % 50);
	}
	
	for (unsigned long int i = 0; i < intDeque.size(); i++)
	{
		std::cout << intDeque.at(i) << " ";
	}

	std::cout << std::endl;
	try
	{
		std::deque<int>::iterator result = easyfind(intDeque, 20);
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}