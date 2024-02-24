/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:07:02 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/24 19:34:33 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) {
	this = &src;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &src) {
	(void)src;
	return *this;
}

// template <typename T>
// typename MutantStack<T>::iterator MutantStack<T>::begin(){
// 	return this->c.;
// }