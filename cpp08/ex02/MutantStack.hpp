/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:38:21 by nikitos           #+#    #+#             */
/*   Updated: 2024/02/25 10:16:35 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <vector>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack (MutantStack const &src);
		MutantStack &operator=(MutantStack const &src);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();
	
		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif