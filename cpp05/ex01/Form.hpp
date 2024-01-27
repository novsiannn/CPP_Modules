/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:35 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/27 11:01:25 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
	public:
		Form();
		Form( std::string name, int gSign, int gExec );
		~Form();
		Form( Form const &src );
		Form &operator=( Form const &src );
		void		beSigned( Bureaucrat &obj );
		int			getGradeSign() const;
		int			getGradeExec() const;
		std::string	getName() const;
		bool		getSign() const;
		int			getCorrectCreation() const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class incorrectCreation : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExec;
		int					_correctCreation;
};

std::ostream& operator<<( std::ostream &os, const Form &src );

#endif