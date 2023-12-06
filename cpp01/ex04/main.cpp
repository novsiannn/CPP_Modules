/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:36:50 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/06 17:45:14 by novsiann         ###   ########.fr       */
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
	std::string fileName = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	std::ifstream inputFile(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "input file can not open." << std::endl; 
		return (1);
	}

	std::stringstream strBuff;
	strBuff << inputFile.rdbuf();
	std::string inputFileLines = strBuff.str();

	size_t pos = 0;
	while(str1 != "" && (pos = inputFileLines.find(str1, pos)) != std::string::npos)
	{
		ft_replace(&inputFileLines, str1, str2, pos);
		pos += str2.length();
	}
	inputFile.close();

	std::ofstream outputFile(fileName.append(".replace"));
	if (!outputFile.is_open())
	{
		std::cout << "output file can not open." << std::endl;
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