/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:16:23 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 14:35:45 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		~Cat();
		Cat( std::string type );
		Cat(const Cat &another);
		Cat &operator=(Cat const &another);

		void		makeSound( void ) const;
		void		think( std::string thoughts ) const;
		std::string	recall( int i ) const;
	private:
		Brain* _brain;
};

#endif