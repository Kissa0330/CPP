/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:26:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/11 21:53:47 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	//basic test
	Array<int> intArray(5);
	std::cout << "basic test" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		intArray[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << intArray[i] << std::endl;
	}
	//copy constructor test
	std::cout << "copy constructor test" << std::endl;
	Array<int> intArray2(intArray);
	for (int i = 0; i < 5; i++)
	{
		std::cout << intArray2[i] << std::endl;
	}
	//copy operator test
	std::cout << "copy operator test" << std::endl;
	Array<int> intArray3;
	intArray3 = intArray2;
	for (int i = 0; i < 5; i++)
	{
		std::cout << intArray3[i] << std::endl;
	}
	//deep copy test
	std::cout << "deep copy test" << std::endl;
	intArray3[0] = 5;
	intArray2[1] = 3;
	std::cout << intArray[0] << std::endl;
	std::cout << intArray[1] << std::endl; 
	//self assignment test
	std::cout << "self assignment test" << std::endl;
	Array<int> *intArray4 = new Array<int>(5);
	Array<int> *intArray5 = NULL;
	intArray5 = intArray4;
	intArray4 = intArray5;
	delete intArray4;
	//out of range test
	std::cout << "out of range test" << std::endl;
	try
	{
		intArray[-1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		intArray[100] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
