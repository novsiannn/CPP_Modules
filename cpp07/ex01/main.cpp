/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:09:26 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/15 22:32:58 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
    int arr_int[3] = {1,9,3}; 
    iter(arr_int, 3, print_elements);
    
    float arr_float[3] = {1.00000f, 234.134, .2f};
    iter(arr_float, 3, print_elements);
    
    std::string arr_str[3] = {"testing", "that", "programm"};
    iter(arr_str, 3, print_elements);

    std::string rel = "aha";
    print_elements(rel);
}
