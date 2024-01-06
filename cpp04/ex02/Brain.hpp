/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:50:50 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 17:53:42 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain( std::string type );
		Brain(const Brain &another);
		Brain &operator=(Brain const &another);

		int			getIndex( void ) const;
		void		addThought( std::string thought );
		std::string	getMemory( int i) const;
	private:
		std::string _ideas[100];
		size_t _index;
};

#endif