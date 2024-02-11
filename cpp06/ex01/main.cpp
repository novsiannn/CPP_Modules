/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 12:01:00 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data case1;
	uintptr_t tmp;

	case1.num = 10;
	case1.str = "42Wolfsburg";

	tmp = Serializer::serialize(&case1);
	Data *case2 = Serializer::deserialize(tmp);

	std::cout << &case1 << std::endl;
	std::cout << case2 << std::endl;

	return (0);
}