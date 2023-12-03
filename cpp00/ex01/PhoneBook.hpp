/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:06:56 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 15:48:18 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>

class PhoneBook {
	public:
		void	ComandDefine();

	private:
		void	Search();
		void	PrintHead();
		void	FindIndex();
		Contact contacts[8];
		int		_num;
};

void	exiting(void);

#endif