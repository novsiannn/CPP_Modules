/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/27 20:09:13 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// { // Test with a ShrubberyCreationForm
	// 	Bureaucrat jorg( "ea", 1 );
	// 	ShrubberyCreationForm main( "main" );
	// 	jorg.signForm(main);
	// 	main.execute(jorg);
	// 	std::cout << main;
	// 	return 0;
	// }
	// { // Test with a RobotomyRequestForm
	// 	RobotomyRequestForm test("blabla");
	// 	Bureaucrat	filip("filip", 72);
	// 	filip.signForm(test);
	// 	test.execute(filip);
	// 	std::cout << test << std::endl;
	// }

	{ // Tests for pardon form
		PresidentialPardonForm test("home");
		Bureaucrat alex("alex" , 1);
		alex.signForm(test);
		std::cout << test << std::endl;
		test.execute(alex);
	}
	
	return 0;
}