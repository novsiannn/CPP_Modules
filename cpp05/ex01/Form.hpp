/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:35 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/24 20:59:55 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <exception>

class Form {
	public:
		Form();
		Form( std::string name, int grade );
		~Form();
		Form(Form const &src);
		Form &operator=(Form const &src);
		int			getGrade() const;
		std::string	getName() const;
		bool		getSign() const;
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
		int					_grade;
};

std::ostream& operator<<(std::ostream &os, const Form &src);

#endif