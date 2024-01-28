/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 21:41:08 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "             Increment test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat jim("jim" , 3);
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			jim.incrementGrade();
	// 		}
	// 		std::cout << jim;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << "Caught an incrementation error: " << e.what() << std::endl;
	// 	}
	// 	return 0;
	// }

	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "             Decrement test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat jim("jim" , 50);
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			jim.decrementGrade();
	// 		}
	// 		std::cout << jim;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "         Decrement too low test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat jim("jim" , 148);
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			jim.decrementGrade();
	// 		}
	// 		std::cout << jim;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "         Increment too high test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat jim("jim" , 3);
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			jim.incrementGrade();
	// 		}
	// 		std::cout << jim;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	return 0;
	// }
	
	// {
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	std::cout << "     False grade by creation test" << std::endl;
	// 	std::cout << "--------------------------------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat jim("jim" , 160);
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			jim.decrementGrade();
	// 		}
	// 		std::cout << jim;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	return 0;
	// }
	
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "              Copy test" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		try
		{
			Bureaucrat jim("jim", 10);
			for (int i = 0; i < 5; i++)
			{
				jim.incrementGrade();
			}
			Bureaucrat jim_copy(jim);
			for (int i = 0; i < 5; i++)
			{
				jim_copy.decrementGrade();
			}
			std::cout << jim;
			std::cout << jim_copy;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		return 0;
	}

	return 0;
}