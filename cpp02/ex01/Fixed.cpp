/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:36:54 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/10 20:54:33 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_numVal = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Const int constructor called" << std::endl;
	_numVal = val << _frac_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Const Float constructor called" << std::endl;
	_numVal = static_cast<int>(val * (1 << _frac_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assigment called" << std::endl;
	setRawBits(src.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_numVal);
}

void Fixed::setRawBits(const int raw)
{
	_numVal = raw;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(_numVal) / (1 << _frac_bits);
}

int Fixed::toInt( void ) const
{
	return _numVal >> _frac_bits;
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed) {
	output << fixed.toFloat();
	return output;
}