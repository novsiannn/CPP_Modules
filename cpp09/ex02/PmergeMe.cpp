/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:42:22 by nikitos           #+#    #+#             */
/*   Updated: 2024/03/27 17:24:28 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
PmergeMe<Container>::PmergeMe(){}

template <typename Container>
PmergeMe<Container>::~PmergeMe(){}

template <typename Container>
PmergeMe<Container>::PmergeMe(char **av)
{
    int number = 0;

    for (int i = 0; av[i]; i++)
    {
        std::istringstream iss(av[i]);
        iss >> number;
        _data.push_back(number);
    }
}

template <typename Container>
std::vector<int> PmergeMe<Container>::jacobsthal_sequence(size_t size)
{
    std::vector<int> temp_index;
    std::vector<int> j_index;
    temp_index.push_back(0);
    temp_index.push_back(1);
    int temp = 0;

    for (int i = 2; temp_index.back() < (int)size; i++){
        temp_index.push_back(temp_index[i - 1] + (temp_index[i - 2] * 2));
    }
    for (size_t i = 1; i < temp_index.size() - 1; i++){
        j_index.push_back(temp_index[i + 1]);
        temp = temp_index[i + 1];
        while (--temp > temp_index[i])
            j_index.push_back(temp);
        std::cout << temp_index[i + 1] << std::endl;
    }
    return j_index;
}

template <typename Container>
void	PmergeMe<Container>::mainSort()
{
    if (_data.size() == 1)
    {
        std::cout << "Error: nothing to sort" << std::endl;
        return ;
    }
	typedef std::pair<int, int > type_pair;
    std::vector<type_pair> pair_arr = this->mergesort_pairs();
    std::vector<int> j_index = this->jacobsthal_sequence(_data.size());
    
    // std::vector<type_pair>::iterator it = pair_arr.begin();
    // while(it != pair_arr.end())
    // {
    //     std::cout << it->first << std::endl;
    //     it++;
    // }
}

template <typename Container>
void	PmergeMe<Container>::printValue()
{
    std::cout << " | ";
	for (typename Container::iterator it = _data.begin(); it != _data.end(); it++)
	{
		std::cout << *it << " | ";
	}
	std::cout << std::endl;
}

template <typename Container>
typename std::vector<typename PmergeMe<Container>::type_pair> PmergeMe<Container>::mergesort_pairs()
{
    std::vector<type_pair> pair_array;
    if(_data.size() % 2 != 0)
    {
        _last = _data.back();
        _data.pop_back();
    }
    else
        _last = -1;
    for(size_t i = 0; i < _data.size(); i+=2)
    {
        if (_data[i + 1] < _data[i])
            std::swap(_data[i], _data[i + 1]);
        pair_array.push_back(std::make_pair(_data[i], _data[i + 1]));
    }
    return pair_array;
}

template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;
