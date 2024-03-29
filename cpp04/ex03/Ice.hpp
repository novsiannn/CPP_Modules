/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:26:23 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/11 20:24:19 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		~Ice();
		Ice(Ice const &another);
		AMateria *clone() const;
		void use(ICharacter& target);
		Ice &operator=(Ice const &another);
};

#endif