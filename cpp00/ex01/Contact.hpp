/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:54:10 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 15:15:20 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact{
	public:
		void	Add();
		void	PrintContact(int index);
		void	PrintIndex();

	private:
		int		checkNumber(int c);
		std::string data[5];
		static std::string questions[5];
};

void	exiting(void);

#endif