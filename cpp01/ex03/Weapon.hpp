/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:58:33 by nikitos           #+#    #+#             */
/*   Updated: 2023/12/05 21:38:20 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	public:
		const std::string&	getType();
		void				setType(std::string newType);
		Weapon(std::string type);
		~Weapon();
	private:
		std::string	_type;	
};

#endif