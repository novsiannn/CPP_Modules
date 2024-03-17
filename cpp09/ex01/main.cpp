/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/03/17 21:53:56 by nikitos          ###   ########.fr       */
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

int	operation(int f, int s, std::string op)
{
	int result = 0;
	char sign = op[0];

	if (sign == '/' && s == 0)
	{
		std::cerr << "Can't divide a zero!" << std::endl;
		exit (1);
	}
	if (sign == '/' && f == 0)
		return (0);
	switch(sign){
		case '+':
			if ((s > 0 && f > INT_MAX - s) ||
				(s < 0 && f < INT_MIN - s))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (s + f);
			break ;
		case '-':
			if ((s > 0 && f < INT_MIN + s) ||
				(s < 0 && f > INT_MAX + s))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (s - f);
			break ;
		case '*':
			if ((f > INT_MAX / s) || (f < INT_MIN / s))
			{
				std::cerr << "INT Limit Reached!" << std::endl;
				exit (1);
			}
			result = (s * f);
			break ;
		case '/':
			result = (s / f);
			break ;
	}
	return result;
}

void	rpn (std::string str)
{
	std::istringstream	iss(str);
	std::stack<int>		base;
	std::string			tmp;
	int					first;
	int					second;

	while(iss >> tmp || base.size() != 1)
	{
		if (tmp.find_first_not_of("0123456789") == std::string::npos)
			base.push(std::atoi(tmp.c_str()));
		else
		{
			first = base.top();
			base.pop();
			second = base.top();
			if (base.size() == 0){
				std::cout << "Error" << std::endl;
				exit (1);
			}
			base.pop();
			base.push(operation(first, second, tmp));
		}
	}
	std::cout << base.top() << std::endl;
}

int main( int ac, char **av ) 
{
	if(ac != 2)
		ft_error(0);
	std::string equation = av[1];
	if(checkEquation(equation))
		std::cout << "Error:: incorrect input" << std::endl;
	else
		rpn(equation);
	return 0;
}