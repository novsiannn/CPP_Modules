/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:07:03 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/17 11:15:08 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource &src);
        MateriaSource   &operator=(MateriaSource &src);
        void learnMateria(AMateria* src);
        AMateria *createMateria(std::string const &type);
    private:
        AMateria    *_source[4];
        int        _index;
};
#endif