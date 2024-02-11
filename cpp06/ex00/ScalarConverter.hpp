/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/07 11:03:38 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include <cstdlib>

# define FALSE 1;
# define INT 2;
# define CHAR 3;
# define FLOAT 4;
# define DOUBLE 5;
# define PSEUDO 6;



class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter( std::string name, int grade );
		~ScalarConverter();
		ScalarConverter( ScalarConverter const &src );
		ScalarConverter	&operator=( ScalarConverter const &src );
	public:
		static void	convert( std::string to_convert );
};

#endif