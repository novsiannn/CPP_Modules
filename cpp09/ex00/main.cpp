/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/15 16:09:51 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <limits.h>

std::string trim(const std::string& input) {
    size_t firstNonSpace = input.find_first_not_of(" ");

    if (firstNonSpace == std::string::npos)
        return "";

    size_t lastNonSpace = input.find_last_not_of(" ");

    return input.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
}

bool correctDate(std::string date)
{
	int year, month, day;
	char dash;
	int yearWithoutCentury;

	std::istringstream iss(date);
	if(!(iss >> year >> dash >> month >> dash >> day))
		return false;
	
	yearWithoutCentury = year % 100;
	if (year < 2009 || year > 2024 || month < 1 || month > 12 ||day < 1 || day > 31)
		return false;
	if (year == 2009 && month == 1 && day < 2)
		return (false);
	if (year == 2024 && month >= 3 && day > 10)
		return (false);
	if (month == 2)
	{
		if (yearWithoutCentury % 4 == 0 && day > 29)
		{
			return false;
		}
		else if (yearWithoutCentury % 4 != 0 && day > 28)
			return false;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	return true;
}

int main( int ac, char **av ) 
{	
	BitcoinExchange base;
	if(ac != 2)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return (1);
	}

	try
	{
		base.read_data();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::string			line;
	std::ifstream		file(av[1]);
	std::string			date;
	std::map<std::string, double>::iterator it;
	double				value;
	double				price;

	if (file.is_open())
	{
		while(getline(file, line))
		{
			std::istringstream	iss(line);
			if (getline(iss, date, '|'))
			{
				if(trim(date) == "date")
					continue ;
				else if (!correctDate(date))
					std::cerr << "Error: incorrect date => " << date << std::endl;
				else if (!(iss >> value)) // if value is empty
					std::cerr << "Error: bad input" << std::endl;
				else if (value < 1)
					std::cerr << "Error: not a positive number" << std::endl;
				else if (value > INT_MAX)
					std::cerr << "Error: very large number" << std::endl;
				else
				{
					date = trim(date);
					it = base.findInData(date);
					price = base.getPrice(it->first);
					std::cout << date <<" => " << value << " = " << price * value << std::endl;
				}
			}
		}
	}			
	file.close();

	return 0;

}