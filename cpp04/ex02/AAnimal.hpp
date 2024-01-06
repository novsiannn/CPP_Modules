/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:11:20 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 14:37:12 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal( std::string name );
		virtual ~AAnimal();
		AAnimal(const AAnimal &another);
		AAnimal &operator=(AAnimal const &another);

		std::string		getType( void ) const;
		virtual void	makeSound() const = 0;
	protected:
		std::string _type;
};

#endif