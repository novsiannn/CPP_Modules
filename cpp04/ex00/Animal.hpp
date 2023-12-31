/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:11:20 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/31 12:30:15 by nikitos          ###   ########.fr       */
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