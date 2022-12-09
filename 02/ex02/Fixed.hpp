/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:38:08 by takanoraika       #+#    #+#             */
/*   Updated: 2022/12/09 19:31:22 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
	int					num;
	const static int	dot = 8;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &origin);
	~Fixed();

	Fixed &operator=(const Fixed &origin);
	bool &operator<(const Fixed &origin);
	bool &operator>(const Fixed &origin);
	bool &operator<=(const Fixed &origin);
	bool &operator>=(const Fixed &origin);
	bool &operator==(const Fixed &origin);
	bool &operator!=(const Fixed &origin);

	Fixed &operator+(const Fixed &x);
	Fixed &operator-(const Fixed &x);
	Fixed &operator*(const Fixed &x);
	Fixed &operator/(const Fixed &x);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed &min(Fixed &x, Fixed &y);
	static Fixed &max(Fixed &x, Fixed &y);
	const static Fixed &min(const Fixed &x, const Fixed &y);
	const static Fixed &max(const Fixed &x, const Fixed &y);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);

#endif
