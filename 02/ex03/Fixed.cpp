/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:59:42 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/13 13:44:48 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->num = 0;
}

Fixed::Fixed(const int n)
{
	this->num = n << Fixed::dot;
}

Fixed::Fixed(const float n)
{
	this->num = (int)roundf(n * (1 << Fixed::dot));
}

Fixed::Fixed(const Fixed &origin)
{
	this->num = origin.getRawBits();
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	this->num = origin.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &x)
{
	bool ret;

	ret = this->num < x.getRawBits();
	return ret;
}

bool Fixed::operator>(const Fixed &x)
{
	bool ret;

	ret = this->num > x.getRawBits();
	return ret;
}

bool Fixed::operator<=(const Fixed &x)
{
	bool ret;

	ret = this->num <= x.getRawBits();
	return ret;
}

bool Fixed::operator>=(const Fixed &x)
{
	bool ret;

	ret = this->num >= x.getRawBits();
	return ret;
}

bool Fixed::operator==(const Fixed &x)
{
	bool ret;

	ret = this->num == x.getRawBits();
	return ret;
}

bool Fixed::operator!=(const Fixed &x)
{
	bool ret;

	ret = this->num != x.getRawBits();
	return ret;
}

Fixed Fixed::operator+(const Fixed &x)
{
	Fixed ret((this->num + x.getRawBits()) / (float)(1 << this->dot));
	return ret;
}

Fixed Fixed::operator-(const Fixed &x)
{
	Fixed ret((this->num - x.getRawBits()) / (float)(1 << this->dot));
	return ret;
}

Fixed Fixed::operator*(const Fixed &x)
{
	Fixed ret((this->getRawBits() * x.getRawBits() / (float)(1 << this->dot) / (float)(1 << this->dot)));
	return ret;
}

Fixed Fixed::operator/(const Fixed &x)
{
	if (this->num == 0)
	{
		Fixed ret(0);
		std::cout << "Error:Zero division is not defined" << std::endl;
		return ret;
	}
	Fixed ret((float)this->num / (float)x.getRawBits());
	return ret;
}

Fixed &Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret = *this;
	++*this;
	return ret;
}

Fixed &Fixed::operator--()
{
	this->num--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ret = *this;
	--*this;
	return ret;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits(void) const
{
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->num / (1 << Fixed::dot);
}

int Fixed::toInt(void) const
{
	return this->num >> Fixed::dot;
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	if (x < y)
		return x;
	return y;
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	if (x < y)
		return y;
	return x;
}

const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
	return (const Fixed &)Fixed::min((Fixed &)x, (Fixed &)y);
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
	return (const Fixed &)Fixed::max((Fixed &)x, (Fixed &)y);
}
