/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:32:29 by nikitos           #+#    #+#             */
/*   Updated: 2024/01/23 10:56:17 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BEREAUCRAT_H
# define BEREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int age);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);
	private:
		const	std::string _name;
		int		_grade;
};

#endif