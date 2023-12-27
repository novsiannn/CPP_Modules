/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:58:17 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/27 11:23:36 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#define green "\033[32m"
#define white "\033[0m"
#define red "\033[31m"
#define cyan "\033[36m"

#include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &another);
		ClapTrap &operator=(ClapTrap const &another);

		std::string getName( void ) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		int	_hit_p;
		int	_energy_p;
		int	_attackDamage;
};

#endif