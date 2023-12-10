/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:07:18 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/10 13:48:40 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=(const Fixed &src);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					_numVal;
		static const int	_frac_bits;
		
};
 
#endif