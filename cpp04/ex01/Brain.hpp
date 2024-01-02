/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:50:50 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/02 15:17:47 by novsiann         ###   ########.fr       */
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
	private:
		std::string _ideas[100];
		size_t _index;
};

#endif