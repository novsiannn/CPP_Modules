/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:36:54 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/25 15:20:10 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed()
{
	_numVal = 0;
}

Fixed::Fixed(const int val)
{
	_numVal = val << _frac_bits;
}

Fixed::Fixed(const float val)
{
	_numVal = roundf(val * (1 << _frac_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	setRawBits(src.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
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

// Arithmetic operators

Fixed Fixed::operator*(Fixed const &src) const
{
	Fixed	tmp(this->toFloat() * src.toFloat());
	return tmp;
}

Fixed Fixed::operator+(Fixed const &src) const
{
	Fixed	tmp(this->toFloat() + src.toFloat());
	return tmp;
}

Fixed Fixed::operator-(Fixed const &src) const
{
	Fixed	tmp(this->toFloat() - src.toFloat());
	return tmp;
}

Fixed Fixed::operator/(Fixed const &src) const
{	
	if (src == 0 || *this == 0)
	{
		std::cout << "Divide by 0 is unacceptable. Return value - ";
		return 0;
	}
	Fixed tmp(this->toFloat() / src.toFloat());
	return tmp;
}

// Post-in/de crement
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_numVal++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_numVal--;
	return tmp;
}

//Pre-in/de crement

Fixed Fixed::operator++()
{
	this->_numVal++;
	return *this;
}

Fixed Fixed::operator--()
{
	this->_numVal--;
	return *this;
}

// comparision operators

bool Fixed::operator<(const Fixed &other) const {
	return (this->_numVal < other._numVal);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_numVal == other._numVal);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_numVal != other._numVal);
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->_numVal > other._numVal);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_numVal >= other._numVal);
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_numVal <= other._numVal);
}

//static member function

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const	Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const	Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}