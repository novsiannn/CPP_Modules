/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 15:34:48 by novsiann         ###   ########.fr       */
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
		AForm *test;
		Intern student;
		Bureaucrat worker("John", 10);

		test = student.makeForm("PresidentialPardonForm", "TEST");
		test->beSigned(worker);
		test->execute(worker);
	
	
		// test = student.makeForm("RobotomyRequestForm", "TEST");
		// test->beSigned(worker);
		// test->execute(worker);

		// test = student.makeForm("ShrubberyCreationForm", "TEST");
		// test->beSigned(worker);
		// test->execute(worker);

		delete test;
	}

	// { // test from subject
	// 	Intern someRandomIntern;
	// 	AForm* rrf;
	// 	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	// 	delete rrf;
	// }
	
	return 0;
}