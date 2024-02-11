/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allClasses.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:23:18 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/11 14:50:00 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allClasses.hpp"

Base::~Base()
{
	std::cout << "Base destructor is called" << std::endl;
}

Base *generate( void )
{
	int		r_num = time(NULL);
	Base	*ptr;

	switch(r_num % 3)
	{
		case 0:
			ptr = new A;
			std::cout << "New A instance created!" << std::endl;
			break;
		case 1:
			ptr = new B;
			std::cout << "New B instance created!" << std::endl;
			break;
		case 2:
			ptr = new C;
			std::cout << "New C instance created!" << std::endl;
			break;
	}
	return ptr;
}

void	identify(Base* p)
{
	A *Aptr = dynamic_cast<A *>(p);
	B *Bptr = dynamic_cast<B *>(p);
	C *Cptr = dynamic_cast<C *>(p);

	if (Aptr != NULL)
		std::cout << "The identified type is an A!" << std::endl;
	else if (Bptr != NULL)
		std::cout << "The identified type is a B!" << std::endl;
	else if (Cptr != NULL)
		std::cout << "The identified type is a C!" << std::endl;
	else
		std::cout << "Type is unknown. Identification failed." << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base &Aptr = dynamic_cast<A &>(p);
		std::cout << &Aptr << " The identified type is an A!" << std::endl;
	}
	catch(std::exception &e)
	{
		try
		{
			Base &Bptr = dynamic_cast<B &>(p);
			std::cout << &Bptr << " The identified type is an B!" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				Base &Cptr = dynamic_cast<C &>(p);
				std::cout << &Cptr << " The identified type is an C!" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << " Unkown type" << std::endl;
			}	
		}
	}
}