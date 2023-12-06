/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:09:17 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/06 18:59:34 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl istance;

	istance.complain("DEBUG");
	istance.complain("INFO");
	istance.complain("WARNING");
	istance.complain("ERROR");
	istance.complain("SOME BULL SHIT");
	return (0);
}