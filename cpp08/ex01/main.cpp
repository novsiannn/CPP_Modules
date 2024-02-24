/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/24 09:39:45 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) 
{
	Span asd(4);

	asd.addNumber(4);
	asd.addNumber(5);
	asd.addNumber(6);
	asd.addNumber(1);
	asd.addNumber(10);
	
	unsigned long int i = -1;
	while (++i < asd.getContainerSize())
		std::cout << asd.getContainerElement(i) << std::endl;
	return 0;
}