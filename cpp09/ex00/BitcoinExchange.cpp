/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:21:44 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/26 11:41:51 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) : _data(src._data)
{
    *this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
    if (this == &src) 
		return *this;
    this->_data = src._data;
    return (*this);
}

const char *BitcoinExchange::NonExistentFile::what() const throw()
{
	return ("File was not open, file not exist");
} 

void	BitcoinExchange::read_data()
{
	std::ifstream file("data.csv");
	std::string	line;
	std::string	elem;
	double		value;

	if (file.is_open())
	{
		while(std::getline(file, line))
		{
			std::istringstream iss(line);
			if(std::getline(iss, elem, ','))
			{
				iss >> value;
				_data[elem] = value;
			}
			iss.clear();
		}
	}
	else
		throw NonExistentFile();
	file.close();
	// for (std::map<std::string, double>::iterator it = _data.begin(); it != _data.end(); ++it)
	// {
    // 	std::cout << it->first << "=>" << it->second << std::endl;
	// }
}