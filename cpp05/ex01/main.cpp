/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/24 21:02:40 by nikitos          ###   ########.fr       */
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
	
	{
		Form test("o4ko", 50);
		std::cout << test;
	}

	return 0;
}