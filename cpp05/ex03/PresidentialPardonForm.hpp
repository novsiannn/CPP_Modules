/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:25:05 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/27 19:25:56 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm:  public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const &src );
		PresidentialPardonForm	&operator=( PresidentialPardonForm const &src );
		void	execute( Bureaucrat const & executor ) const;
		std::string	getTarget() const;
		class	UnsignedForm : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		std::string	_target;
};
#endif