/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allClasses.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:22:41 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 14:52:07 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLCLASSES_H
# define ALLCLASSES_H

#include <string>
#include <iostream>
#include <exception>
#include <ctime>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif