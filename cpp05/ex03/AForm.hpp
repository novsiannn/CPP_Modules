/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:35 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/27 16:49:11 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
	public:
		AForm();
		AForm( std::string name, int gSign, int gExec );
		virtual ~AForm();
		AForm( AForm const &src );
		AForm &operator=( AForm const &src );
		void				beSigned( Bureaucrat &obj );
		int					getGradeSign() const;
		int					getGradeExec() const;
		std::string			getName() const;
		bool				getSign() const;
		void				setSignBool(bool sign);
		int					getCorrectCreation() const;
		virtual void		execute( Bureaucrat const & executor ) const = 0;
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

std::ostream& operator<<( std::ostream &os, const AForm &src );

#endif