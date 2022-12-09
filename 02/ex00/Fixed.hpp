/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:38:08 by takanoraika       #+#    #+#             */
/*   Updated: 2022/12/09 14:13:42 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int					num;
	const static int	dot = 8;
public:
	Fixed(void);
	Fixed(const Fixed &origin);
	Fixed &operator=(const Fixed &origin);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
