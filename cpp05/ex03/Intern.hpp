/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:48:23 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/28 13:16:55 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;
class Intern
{
	public:
		Intern();
		~Intern();
		Intern( Intern const &src );
		Intern	&operator=( Intern const &src );
		AForm	*makeForm( std::string name, std::string target );
	private:
		AForm       *makeShrubberyForm( std::string target );
        AForm       *makeRobotomyForm( std::string target );
        AForm       *makePardonForm( std::string target );	
};
#endif