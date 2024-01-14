/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:44:51 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/14 15:36:42 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter 
{
    public:
        Character();
        Character(std::string name);
        Character(Character &src);
        virtual ~Character();
        Character   &operator=(Character &src);
        std::string const &getName() const;
        void    setName( std::string name );
        void        setInventoryAll(AMateria *m);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        AMateria    *getInventoryItem(int i);
    private:
        AMateria    *_inventory[4];
        std::string _name;
};
#endif