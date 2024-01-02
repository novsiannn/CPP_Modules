/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:16:23 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 17:45:32 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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