/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:32:29 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/27 21:26:21 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat{
	public:
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class UnsignedForm: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		~Bureaucrat();
		Bureaucrat( Bureaucrat const &src );
		Bureaucrat	&operator=( Bureaucrat const &src );
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm( AForm &form );
		void		executeForm(AForm const & form);
	private:
		const	std::string	_name;
		int					_grade;
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat &src );
#endif