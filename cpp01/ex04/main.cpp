/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:36:50 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/06 16:59:29 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include <sstream>

void	ft_replace(std::string *lines, std::string str1, std::string str2, size_t pos)
{
		lines->erase(pos, str1.length());
		lines->insert(pos, str2);
}

int	execute_file(int ac, char **av)
{
	std::string file_name = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	std::ifstream inputFile(file_name);
	if(!inputFile.is_open())
	{
		std::cout << "That file is not exist." << std::endl;
		return (1);
	}

	std::stringstream strBuff;
	strBuff << inputFile.rdbuf();
	std::string inputFileLines = strBuff.str();

	size_t pos = inputFileLines.find(str1, pos);
	while (str1 != "" && pos != std::string::npos)
	{
		ft_replace(&inputFileLines, str1, str2, pos);
		pos += str2.length();
		pos = inputFileLines.find(str1, pos);
	}
	inputFile.close();

	std::ofstream outputFile(file_name.append(".replace"));
	if (!outputFile.is_open())
	{
		std::cout << "Error with Output file opening." << std::endl;
		return (1);
	}
	outputFile << inputFileLines;
	outputFile.close();
	return (0);
}

int main(int ac, char **av)
{
	int return_value = 1;
	if (ac == 4)
		return_value = execute_file(ac, av);
	else
	{
		std::cout << "Wrong input, try one more time please." << std::endl;
		std::cout << "Here is a usage: ./programm_name file_name str1 str2" << std::endl;
		return (return_value);
	}
	return (return_value);
}