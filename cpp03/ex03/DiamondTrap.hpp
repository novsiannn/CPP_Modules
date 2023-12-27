/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:38:37 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/27 12:20:05 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &another);
		DiamondTrap &operator=( const DiamondTrap &another);

		using	ScavTrap::attack;
		void	whoAmI();
	private:
		std::string	_name;
};

#endif