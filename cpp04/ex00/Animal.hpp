/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:11:20 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/13 15:02:20 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal( std::string name );
		virtual ~Animal();
		Animal(const Animal &another);
		Animal &operator=(Animal const &another);
		std::string		getType( void ) const;
		virtual void	makeSound() const;
	protected:
		std::string _type;
};

#endif