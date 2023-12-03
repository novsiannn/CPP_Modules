/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:54:01 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 11:29:03 by novsiann         ###   ########.fr       */
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

void	Contact::Add()
{
	int c = 0;

	while(c < 5)
	{
		std::cout << questions[c] << ": ";
		getline(std::cin, this->data[c]);
		this->data[c] = this->data[c];
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
}
