/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 22:03:32 by nikitos          ###   ########.fr       */
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
	// 	try
	// 	{
	// 		Bureaucrat jorg( "ea", 150 );
	// 		ShrubberyCreationForm main( "main" );
	// 		jorg.signForm(main);
	// 		main.execute(jorg);
	// 		std::cout << main;
	// 		return 0;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	
	// { // Test with a RobotomyRequestForm
	// 	try
	// 	{
	// 		RobotomyRequestForm test("blabla");
	// 		Bureaucrat	filip("filip", 10);
	// 		filip.signForm(test);
	// 		test.execute(filip);
	// 		std::cout << test << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	{ // Tests for pardon form
		try
		{
			PresidentialPardonForm test("home");
			Bureaucrat alex("alex" , 1);
			alex.signForm(test);
			std::cout << test << std::endl;
			test.execute(alex);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	return 0;
}