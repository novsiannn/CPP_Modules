/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:01:49 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 15:51:45 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Search()
{
	int con = 0;
	int i = this->_num;

	PrintHead();
	if (i > 0)
	{
		while(con < i)
		{
			this->contacts[con].PrintContact(con + 1);
			std::cout << "---------------------------------------------" << std::endl;
			con++;
		}
		this->FindIndex();
	}
	else
		std::cout << "We do not have Contacts in Phonebook." << std::endl;
}

void	PhoneBook::PrintHead()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::FindIndex()
{
	std::string indexToFind;

	while(true)
	{
		std::cout << "Give me index which u want to get: ";
		std::getline(std::cin, indexToFind);
		if (indexToFind.length() > 1)
		{
			std::cout << "Wrong input, try again" << std::endl;
			continue ;
		}
		else if(isdigit(indexToFind[0]) && stoi(indexToFind) < 9 && stoi(indexToFind) > 0)
		{
			if (stoi(indexToFind) <= this->_num)
				this->contacts[stoi(indexToFind) - 1].PrintIndex();
			else
			{
				std::cout << "Wrong input, try again" << std::endl;
				continue ;
			}
			break ;
		}
		else
			std::cout << "Wrong input, try again" << std::endl;
	}
}
