/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:07:43 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 11:34:13 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <string>
#include <iostream>

struct Data
{
	int num;
	std::string str;
};


class Serializer{
	private:
		Serializer();
		~Serializer();
		Serializer( Serializer const &src );
		Serializer	&operator=( Serializer const &src );
	public:
		static uintptr_t serialize( Data* ptr );
		static Data* deserialize( uintptr_t raw );
};

#endif