/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:10:37 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 14:52:24 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allClasses.hpp"

int main()
{
	Base *new_base = generate();
	Base &rffr = *new_base;
	
	identify(new_base);
	identify(rffr);

	delete (new_base);
	return (0);
}