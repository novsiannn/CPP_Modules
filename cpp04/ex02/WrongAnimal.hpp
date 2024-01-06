/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:35:26 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/31 12:37:28 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal( std::string name );
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &another);
		WrongAnimal &operator=(WrongAnimal const &another);

		std::string		getType( void ) const;
		void	makeWrongSound() const;
	protected:
		std::string _type;
};

#endif