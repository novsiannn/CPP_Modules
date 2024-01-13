/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:35:26 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/13 15:07:54 by novsiann         ###   ########.fr       */
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