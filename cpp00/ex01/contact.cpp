/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:54:01 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 15:15:30 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::questions[5] =
{
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

int	Contact::checkNumber(int c)
{
	int i = 0;

	while (this->data[c][i])
	{
		if (!isdigit(this->data[c][i]))
		{
			std::cout << "Your phone number has contain only integers!" << std::endl;
			return 1;
		}
		else if (this->data[c].length() < 6)
		{
			std::cout << "Your " << questions[c];
			std::cout << " has to be at least 6 symbols!" << std::endl;
			return 1;
		}
		i++;
	}
	return 0;
}

void	Contact::Add()
{
	int c = 0;

	while(c < 5)
	{
		std::cout << questions[c] << ": ";
		getline(std::cin, this->data[c]);
		if (c == 3)
		{
			if(checkNumber(c))
				continue ;
		}
		if(this->data[c].length() < 3)
		{
			std::cout << "Your " << questions[c];
			std::cout << " has to be at least 3 symbols!" << std::endl;
			continue;
		}
		c++;
	}
	std::cout << "Contact was succesfully added!" << std::endl;
}

void	exiting(void)
{
	std::cout << "Bye My Friend!" << std::endl;
	exit(EXIT_SUCCESS);
}

void	Contact::PrintIndex()
{
	int i = 0;

	while (i < 5)
	{
		std::cout << this->questions[i] << ": ";
		std::cout << this->data[i] << std::endl;
		i++;
	}
	std::cout << "The information was successfully delivered!" << std::endl;
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
