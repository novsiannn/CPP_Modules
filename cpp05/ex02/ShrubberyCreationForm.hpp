/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:58:07 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/27 16:14:36 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &src );
		std::string	getTarget() const;
		class	UnsignedForm : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		void	execute( Bureaucrat const & executor ) const;
	private:
		std::string	_target;
};
#endif
