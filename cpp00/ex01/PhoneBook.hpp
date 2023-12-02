/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:06:56 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/02 21:35:34 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include<iomanip>
#include <string>

class Contact{
	public:
		void	Add();
		void	PrintContact(int index);
		void	AskIndex();
	private:
		std::string data[5];
		static std::string questions[5];
};

class PhoneBook {
	public:
		void	ComandDefine();
		void	Search();
		void	PrintHead();
	private:
		Contact contacts[8];
		int		num;
};

void	exiting(void);

#endif