/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:10:03 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/02 16:55:00 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Search()
{
	PrintHead();
}

void	PhoneBook::PrintHead()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contact::Add()
{
	int c = 0;

	while(c < 5)
	{
		std::cout << questions[c] << ": ";
		getline(std::cin, this->data[c]);
		data[c] = data[c].substr(0,9);
		c++;
	}
	c = 0;
	while (c < 5)
	{
		std::cout << data[c];
		c++;
	}
	std::cout << std::endl;
}

void	exiting(void)
{
	std::cout << "Bye My Friend!" << std::endl;
	exit(EXIT_SUCCESS);
}

void	PhoneBook::ComandDefine(void)
{
	std::string cmd;
	int i = 0;
	int c = 0;

	while(std::getline(std::cin, cmd))
	{
		if (cmd == "SEARCH")
			this->Search();
		else if (cmd == "ADD")
		{
			if (i > 7)
			{
				i = 0;
				std::cout << "Starting from first contact!" << std::endl;
			}
			this->contacts[i].Add();
			i++;
			std::cout << i << " - It is iterator "<< std::endl;
		}
		else if(cmd == "EXIT")
			exiting();
		else
			std::cout << "Command is unknown." << std::endl;
	}
	// if (cmd == "EXIT")
	// 	std::cout << cmd << std::endl;	
}

int main()
{
	PhoneBook book;

	book.ComandDefine();
}
