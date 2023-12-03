/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:10:03 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 15:15:38 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ComandDefine(void)
{
	std::string cmd;
	int i = 0;
	this->num = 0;

	while(true)
	{
		std::cout << "Next command: ";
		std::getline(std::cin, cmd);
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
			if (i > this->num)
				this->num = i;
		}
		else if(cmd == "EXIT")
			exiting();
		else
			std::cout << "Command is unknown." << std::endl;
	}
}

int main()
{
	PhoneBook book;

	std::cout << "Hi! It is a Phonebook. Here is programm usage:" << std::endl;
	std::cout << "[ADD]- to add contact," << std::endl;
	std::cout << "[SEARCH]- to search contact," << std::endl;
	std::cout << "[EXIT]- to exit programm," << std::endl;
	std::cout << "I am waiting for your commands <3" << std::endl; 
	book.ComandDefine();
}
