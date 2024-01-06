/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:14:34 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 14:35:43 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		~Dog();
		Dog( std::string type );
		Dog(const Dog &another);
		Dog &operator=(Dog const &another);

		void		makeSound( void ) const;
		void		think( std::string thoughts ) const;
		std::string	recall( int i ) const;
	private:
		Brain *_brain;
};

#endif