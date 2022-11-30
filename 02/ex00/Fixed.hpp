/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:38:08 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/30 19:31:11 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int	num;
	int	dot;
public:
	Fixed(void);
	Fixed(const Fixed &origin);
	Fixed &operator=(const Fixed &origin);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
