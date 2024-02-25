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

// Test from subject
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    return 0;
}

// int main( void ) 
// {
// 	MutantStack<int> test;
// 	test.push(42);
// 	test.push(41);
// 	test.push(43);
// 	std::cout << *test.begin();
// 	// MutantStack<int>::iterator it = test.begin();
//     MutantStack<int>::iterator ite = test.end();

//     std::cout << *ite << std::endl;
// }

// Subject test with list 
// int main()
// {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << mstack.back() << std::endl;
//     mstack.pop_back();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
// // [...]
//     mstack.push_back(0);
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::list<int> s(mstack);

//     return 0;
// }

// Test with vectors
// int main()
// {
//     std::vector<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << mstack.back() << std::endl;
//     mstack.pop_back();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
// //[...]
//     mstack.push_back(0);
//     std::vector<int>::iterator it = mstack.begin();
//     std::vector<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::vector<int> s(mstack);

//     return 0;
// }

// Some tests with string
// int main()
// {


//     MutantStack<std::string> a;
//     a.push("Ah! my Beloved, fill the Cup that clears");
//     a.push("TO-DAY of past Regrets and future Fears-");
//     a.push(" To-morrow?—Why, To-morrow I may be");
//     a.push("Myself with Yesterday's Sev'n Thousand Years.");
//     MutantStack<std::string>::iterator i; 
//     for(i = a.begin(); i != a.end(); i++)
//         std::cout  << *i  << std::endl;
//     std::cout << "----now the reverse iterator:----- \n";
//     MutantStack<std::string>::reverse_iterator ri;
//     for (ri = a.rbegin(); ri != a.rend(); ri++) // in reverse iterator, when you say ++, it means ++ in the reverse direction.
//         std::cout << *ri << std::endl;
//     ri = a.rbegin(); // it is the last element
//     std::cout << *ri << std::endl;

//     return 0;
// }