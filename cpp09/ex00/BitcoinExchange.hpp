/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/03/15 15:44:58 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <exception>
#include <sstream>
#include <iterator>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &src);
		void		read_data();
		double		getPrice(std::string date);
		std::map<std::string, double>::iterator	findInData(std::string line);
		class NonExistentFile : public std::exception
		{
			public:
				const char *what() const throw();
		};
	private:
		std::map<std::string, double>	_data;
};

#endif