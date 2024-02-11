/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:41:13 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/07 21:56:09 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor is called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	(void)src;
	return ( *this );
}

// -------------------------------------------

int	getType(std::string str)
{
	if (str.length() == 1 && !isdigit(str.at(0)))
		return CHAR;
	if ( str == "nan" || str == "NAN" || str == "+inff" || str == "+INFF" || str == "-inff" || str == "-INFF" )
        return PSEUDO;
	for(size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str.at(i)) && str.at(i) != '.' && str.at(i) != 'f' && str.at(i) != '+' && str.at(i) != '-')
            return FALSE;
		if (i != 0 && (str.at(i) == '+' || str.at(i) == '-'))
            return FALSE;
	}
	if (str.find('.') != std::string::npos)
    {
		size_t first_dot = str.find_first_of('.'); 
		if ((first_dot != str.find_last_of('.')) || str.find_first_of('f') != str.find_last_of('f'))
           return FALSE;
		if (!isdigit(str[first_dot + 1]))
			return FALSE;
		if (str.find('f') == str.length() - 1)
            return FLOAT;
		return DOUBLE;
    }
	if (str.find('f') != std::string::npos)
        return FALSE;
	return INT;
}

void	print_out(int n, char c, double d, float f, bool valid, int bigger_limit)
{
	if (n > 32 && n < 127)
	{
		std::cout << "char: " << c << std::endl;
		if (bigger_limit)
			std::cout << "int: No displayable" << std::endl;
		else
			std::cout << "int: " << n << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" <<  std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else if (valid)
	{
		std::cout << "char: Non displayable"  << std::endl;
		if (bigger_limit)
			std::cout << "int: Non displayable" << std::endl;
		else
			std::cout << "int: " << n << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" <<  std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "char: impossible"  << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" <<  std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	char_handle( char c )
{
	float cnv_float = static_cast<float>(c);
	double cnv_double = static_cast<double>(c);
	int cnv_int = static_cast<int>(c);
	print_out(cnv_int, c, cnv_double, cnv_float, 1, 0); 
}

void	int_handle(int num)
{
	char cnv_char = static_cast<char>(num);
	float cnv_float = static_cast<float>(num);
	double cnv_double = static_cast<double>(num);
	print_out(num, cnv_char, cnv_double, cnv_float, 1, 0); 
}

void pseudo_handle( std::string str )
{
	float cnv_float = static_cast<float>(atof(str.c_str()));
	double cnv_double = static_cast<double>(cnv_float);
	char cnv_char = static_cast<char>(cnv_float);
	int cnv_int = static_cast<int> (cnv_float);
	print_out(cnv_int, cnv_char, cnv_double, cnv_float, 0, 0); 
}

void float_handle( float cnv_float )
{
	double cnv_double = static_cast<double>(cnv_float);
	char cnv_char = static_cast<char>(cnv_float);
	cnv_float = static_cast<float>(cnv_float);
	int bigger_limit = 0;
	int cnv_int = 0;
	if (cnv_float > std::numeric_limits<int>::max())
		bigger_limit = 1;
	else if (cnv_float < std::numeric_limits<int>::min())
		bigger_limit = 1;
	else
		cnv_int = static_cast<int> (cnv_float);
	print_out(cnv_int, cnv_char, cnv_double, cnv_float, 1, bigger_limit); 
}

void double_handle( double cnv_double )
{
	float cnv_float = static_cast<float>(cnv_double);
	char cnv_char = static_cast<char>(cnv_double);
	int cnv_int = static_cast<int> (cnv_double);
	print_out(cnv_int, cnv_char, cnv_double, cnv_float, 1, 0); 
}

void ScalarConverter::convert( std::string to_convert )
{
	if (to_convert.empty())
	{
		std::cout << "Error! Incorrect input !" << std::endl;
		return ;
	}
	int type = getType( to_convert );
	long int tmp = atol(to_convert.c_str());
	if (type != 1 && (tmp > std::numeric_limits<int>::max() ||  tmp < std::numeric_limits<int>::min()))
		type = FLOAT;
	switch (type)
	{
		case 1:
			std::cout << "Error! Incorrect input !" << std::endl;
			break;
		case 2:
			int_handle(std::atoi(to_convert.c_str()));
			break;
		case 3:
			char_handle(to_convert.at(0));
			break;
		case 4:
			float_handle(std::atof(to_convert.c_str()));
			break;
		case 5:
			double_handle(std::atof(to_convert.c_str()));
			break;
		case 6:
			pseudo_handle( to_convert );
			break;
	}
}