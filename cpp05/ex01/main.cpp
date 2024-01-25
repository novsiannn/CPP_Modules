/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/25 22:25:25 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "             Increment test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim" , 50);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.incrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	return 0;
	// }

	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "             Decrement test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim" , 50);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.decrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "         Decrement too low test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim" , 146);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.decrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "         Increment too high test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim" , 5);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.incrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "     False grade by creation test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim", 160);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.incrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "              Copy test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	Bureaucrat jim("jim", 160);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim.incrementGrade();
	// 	}
	// 	Bureaucrat jim_copy(jim);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		jim_copy.decrementGrade();
	// 	}
	// 	std::cout << jim;
	// 	std::cout << jim_copy;
	// 	return 0;
	// }

	// ----------------------------------- TEST FOR EX02 ----------------------------------------

	// {	// Tests for form sign
	// 	Bureaucrat felix("Felix", 52);
	// 	Form bewerbung("Bewerbung", 50, 50);
	// 	bewerbung.beSigned(felix);
	// 	std::cout << felix;
	// 	std::cout << bewerbung;
	// 	bewerbung.beSigned(felix);
	// 	felix.incrementGrade();
	// 	felix.incrementGrade();
	// 	felix.incrementGrade();
	// 	bewerbung.beSigned(felix);
	// 	bewerbung.beSigned(felix);
	// 	std::cout << bewerbung;
	// }

	// { // Test for invalid value
	// 	Bureaucrat felix("Felix",95);
	// 	Form bewerbung("Bewerbung", 151, 150);
	// 	Form correct_bewerbung("cor_bewerb", 100, 100);
	// 	bewerbung.beSigned(felix);
	// 	std::cout << bewerbung;
	// 	felix.signForm(bewerbung);
	// 	felix.signForm(correct_bewerbung);
	// 	std::cout << correct_bewerbung;
	// 	std::cout << bewerbung;
	// 	std::cout << felix;
	// }
	
	{ // Test for deep copy 
		
		Form Lebenslauf_God("God", 136, 136);
		Bureaucrat agent("007", 1);
		
		Form Lebenslauf_New(Lebenslauf_God);
		Lebenslauf_God.beSigned(agent);
		std::cout << Lebenslauf_God;
		std::cout << Lebenslauf_New;
	}

	return 0;
}