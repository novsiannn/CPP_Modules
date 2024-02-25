/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/25 10:36:38 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main( void ) 
// {
// 	MutantStack<int> test;
// 	test.push(42);
// 	test.push(41);
// 	test.push(43);
// 	// std::cout << *test.begin();
// 	MutantStack<int>::iterator it = test.begin();
// 	std::cout << *it << std::endl;
// }

int main()
{
// MutantStack<int> mstack;
std::list<int> mstack;
mstack.push_back(5);
mstack.push_back(17);
std::cout << "Last int " << *mstack.end() << std::endl;
mstack.pop_back();
std::cout << mstack.size() << std::endl;
mstack.push_back(3);
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);
std::list<int>::iterator it = mstack.begin();
std::list<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::list<int> s(mstack);
return (0);
}
