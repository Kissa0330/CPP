/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:26:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 17:48:51 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
	{
		int arr[3] = {0,1,2};
		std::cout << "before" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
		iter(arr, 3, inclement);
		std::cout << "after" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
	}
	{
		char arr[3] = {'a','b','c'};
		std::cout << "before" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
		iter(arr, 3, inclement);
		std::cout << "after" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
	}
	{
		double arr[3] = {0.1,0.2,0.3};
		std::cout << "before" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
		iter(arr, 3, inclement);
		std::cout << "after" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
	}
	{
		float arr[3] = {0.1,0.2,0.3};
		std::cout << "before" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
		iter(arr, 3, inclement);
		std::cout << "after" << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			std::cout << "arr[i] = " << arr[i] << std::endl;
		}
	}
	return 0;
}
