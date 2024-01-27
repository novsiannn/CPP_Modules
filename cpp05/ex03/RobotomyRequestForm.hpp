/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:07:28 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/27 18:45:44 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm:  public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		~RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const &src );
		RobotomyRequestForm	&operator=( RobotomyRequestForm const &src );
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