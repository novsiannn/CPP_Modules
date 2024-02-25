/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:07:02 by novsiann          #+#    #+#             */
/*   Updated: 2024/02/25 10:28:13 by nikitos          ###   ########.fr       */
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

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const{
	return this->c.rend();
}