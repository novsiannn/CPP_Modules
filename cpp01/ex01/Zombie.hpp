/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:39 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 18:47:22 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string _name;
};

	Zombie* zombieHorde( int N, std::string name );
#endif