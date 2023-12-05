/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:23:50 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 21:56:19 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void attack();
		~HumanB();
		void setWeapon(Weapon& type);
	private:
		Weapon		*_weapon;
		std::string	_name;	
};

#endif