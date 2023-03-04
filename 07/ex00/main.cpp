/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:26:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 17:35:39 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 1;
		int b = 2;
		std::cout << "a:" << a << " b:" << b << std::endl;
		Swap(a,b);
		std::cout << "swap " << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << Max(a,b) << std::endl;
		std::cout << "min " << Min(a,b) << std::endl;
	}
	{
		char a = 'h';
		char b = 'z';
		std::cout << "a:" << a << " b:" << b << std::endl;
		Swap(a,b);
		std::cout << "swap " << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << Max(a,b) << std::endl;
		std::cout << "min " << Min(a,b) << std::endl;
	}
	{
		double a = 1.3;
		double b = 2.66;
		std::cout << "a:" << a << " b:" << b << std::endl;
		Swap(a,b);
		std::cout << "swap " << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << Max(a,b) << std::endl;
		std::cout << "min " << Min(a,b) << std::endl;
	}
	{
		float a = 1.3;
		float b = 2.66;
		std::cout << "a:" << a << " b:" << b << std::endl;
		Swap(a,b);
		std::cout << "swap " << "a:" << a << " b:" << b << std::endl;
		std::cout << "max " << Max(a,b) << std::endl;
		std::cout << "min " << Min(a,b) << std::endl;
	}
	{
		int a = 1;
		int b = 1;
		std::cout << "a:" << &a << " b:" << &b << std::endl;
		int &c = Max(a,b);
		std::cout << "max " << c << " address:" <<  &c << std::endl;
		c = Min(a,b);
		std::cout << "min " << c << " address:" << &c << std::endl;
	}
	return 0;
}
