/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:35 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/25 12:16:46 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form();
		Form( std::string name, int gSign, int gExec );
		~Form();
		Form( Form const &src );
		Form &operator=( Form const &src );
		int			getGradeSign() const;
		int			getGradeExec() const;
		std::string	getName() const;
		bool		getSign() const;
		void		beSigned( Bureaucrat obj );
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
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExec;
};

std::ostream& operator<<( std::ostream &os, const Form &src );

#endif