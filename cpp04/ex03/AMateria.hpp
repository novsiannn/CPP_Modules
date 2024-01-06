/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:46:48 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 18:40:37 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual	~AMateria();
		AMateria(AMateria const &another);
		AMateria &operator=(AMateria const &another);

	std::string const & getType() const; //Returns the materia type
	// virtual AMateria* clone() const = 0;
	// virtual void use(ICharacter& target);
};

#endif