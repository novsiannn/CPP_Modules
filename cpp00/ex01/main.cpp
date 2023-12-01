/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:10:03 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/01 19:52:00 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ComandDefine(void)
{
	std::string cmd;

	std::getline(std::cin, cmd);
	// if (cmd == "EXIT")
	// 	std::cout << cmd << std::endl;
	// else if (cmd == "SEARCH")
	// 	std::cout << cmd << std::endl;
	// else if (cmd == "ADD")
		std::cout << cmd << std::endl;
	
}

int main()
{
	PhoneBook book;

	book.ComandDefine();
}
