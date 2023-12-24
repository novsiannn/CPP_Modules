/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:07:18 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/24 13:44:13 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed(Fixed const &src);

		Fixed	&operator=(const Fixed &src);

		Fixed	operator*(Fixed const &src) const ;
		Fixed	operator+(Fixed const &src) const ;
		Fixed	operator-(Fixed const &src) const ;
		Fixed	operator/(Fixed const &src) const ;
		// Post-increment
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator++();
		Fixed	operator--();
		
		static	Fixed	&max(Fixed &a, Fixed &b);
		static	Fixed	&min(Fixed &a, Fixed &b);
		static	const	Fixed	&max(Fixed const &a, Fixed const &b);
		static	const	Fixed	&min(Fixed const &a, Fixed const &b);

		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_numVal;
		static const int	_frac_bits;
		
};

std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif