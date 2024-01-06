/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:49:52 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/06 18:50:21 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	AMateria test("blabla");
	Cure test1;
	Ice test2;
	
	std::cout << test.getType() << std::endl;
	std::cout << test1.getType() << std::endl;
	std::cout << test2.getType() << std::endl;

	return (0);
}