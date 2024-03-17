/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/17 11:31:32 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void ft_error(int i)
{
	if (i == 0)
		std::cout << "Error: Incorrect number of arguments!" << std::endl;
}

int	checkEquation(std::string str)
{
	int num_quanity = 0;
	int	oper_quanity = 0;
	std::istringstream iss(str);
	std::istringstream rdn(str);
	std::string tmp1;
	std::string tmp2;

	rdn >> tmp1;
	rdn >> tmp2;
	if ((tmp1 == "+" || tmp1 == "-" || tmp1 == "*" || tmp1 == "/")
		|| tmp2 == "+" || tmp2 == "-" || tmp2 == "*" || tmp2 == "/")
		return (1);
	while(iss >> tmp1)
	{
		if (tmp1.size() > 1 || tmp1.find_first_not_of("0123456789+-/* ") != std::string::npos)
			return 1;
		if (tmp1 == "+" || tmp1 == "-" || tmp1 == "*" || tmp1 == "/")
			++oper_quanity;
		else
			++num_quanity;
	}
	if (--num_quanity != oper_quanity)
		return (1);
	return 0;
}

int main( int ac, char **av ) 
{
	if(ac != 2)
		ft_error(0);
	std::string equation = av[1];
	if(checkEquation(equation))
		std::cout << "Error:: incorrect input" << std::endl;
	return 0;
}