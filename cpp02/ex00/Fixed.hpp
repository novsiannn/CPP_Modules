/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:07:18 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/08 20:38:20 by novsiann         ###   ########.fr       */
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
		void setRawBits( int const raw );
		int getRawBits( void ) const;
	private:
		int fix_point;
		static const int frac_bits;
		
};
 
#endif