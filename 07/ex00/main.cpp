/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:26:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 17:39:11 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		int a = 1;
		int b = 2;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "swap "
				  << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << max(a, b) << std::endl;
		std::cout << "min " << min(a, b) << std::endl;
	}
	{
		char a = 'h';
		char b = 'z';
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "swap "
				  << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << max(a, b) << std::endl;
		std::cout << "min " << min(a, b) << std::endl;
	}
	{
		double a = 1.3;
		double b = 2.66;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "swap "
				  << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << max(a, b) << std::endl;
		std::cout << "min " << min(a, b) << std::endl;
	}
	{
		float a = 1.3;
		float b = 2.66;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "swap "
				  << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << max(a, b) << std::endl;
		std::cout << "min " << min(a, b) << std::endl;
	}
	{
		int a = 1;
		int b = 1;
		std::cout << "a:" << &a << " b:" << &b << std::endl;
		int &c = max(a, b);
		std::cout << "max " << c << " address:" << &c << std::endl;
		c = min(a, b);
		std::cout << "min " << c << " address:" << &c << std::endl;
	}
	return 0;
}
