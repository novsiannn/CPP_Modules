/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 22:20:07 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{ //Intern tests
		try
		{
			AForm *test;
			Intern student;
			Bureaucrat worker("John", 5);

			// test = student.makeForm("PresidentialPardonForm", "TEST");
			// test->beSigned(worker);
			// test->execute(worker);
			
			// test = student.makeForm("RobotomyRequestForm", "TEST");
			// test->beSigned(worker);
			// test->execute(worker);

			test = student.makeForm("ShrubberyCreationForm", "TEST");
			test->beSigned(worker);
			test->execute(worker);
		
			delete test;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	// { // test from subject
	
	// 	try
	// 	{
	// 		Intern someRandomIntern;
	// 		AForm* rrf;
	// 		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	// 		delete rrf;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	
	return 0;
}