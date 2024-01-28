/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:48:23 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/28 11:11:18 by nikitos          ###   ########.fr       */
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
		std::string	getTarget() const;
		AForm	*makeForm( std::string name, std::string target );
		AForm       *makeShrubberyForm( std::string target );
        AForm       *makeRobotomyForm( std::string target );
        AForm       *makePardonForm( std::string target );
	private:
		std::string	_target;
		std::string	_name;
};
#endif