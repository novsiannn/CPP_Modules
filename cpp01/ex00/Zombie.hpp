/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:39 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 17:54:03 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
	public:
		Zombie(std::string _name);
		~Zombie();
		void	announce(void);
	private:
		std::string _name;
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
#endif