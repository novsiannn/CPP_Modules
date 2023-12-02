/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:10:03 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/02 22:02:45 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::PrintHead()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contact::PrintContact(int index)
{
	int i = 0;
	int len;
	int diff;

	std::cout <<  "|";
	std::cout << std::setw(10) << std::right << index;
	while (i < 3)
	{
		len = this->data[i].length();
		diff = 10 - len;
		std::cout << "|";
		if (len >= 10)
			std::cout << this->data[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << this->data[i].substr(0, 9);
		i++;
	}
	std::cout << "|" << std::endl;
}

void	Contact::AskIndex()
{
	int i = 0;

	while (i < 5)
	{
		std::cout << this->questions[i] << ": ";
		std::cout << this->data[i] << std::endl;
		i++;
	}
}

void	PhoneBook::Search()
{
	int con = 0;
	int indexToFind = 0;
	int i = this->num;

	PrintHead();
	if (i > 0)
	{
		while(con < i)
		{
			this->contacts[con].PrintContact(con + 1);
			std::cout << "---------------------------------------------" << std::endl;
			con++;
		}
		std::cout << "Give me index which u want to get: ";
		std::cin >> indexToFind;
		if (indexToFind < 8)
			this->contacts[indexToFind - 1].AskIndex();
		else
			std::cout << "Wrong input" << std::endl;
	}
	else
		std::cout << "We do not have Contacts in Phonebook." << std::endl;
	
}

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
