/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:07:03 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/14 15:32:09 by novsiann         ###   ########.fr       */
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
        MateriaSource(MateriaSource const &src);
        MateriaSource   &operator=(MateriaSource &src);
        void learnMateria(AMateria*);
        AMateria *createMateria(std::string const &type);
    private:
        AMateria    *_source[4];
        int        _index;
};
#endif