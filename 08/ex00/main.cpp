/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:27:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/05 17:24:32 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include "iostream"


int main()
{
	try
	{
		//test == {3, 3, 3}
		std::vector<int>test(3,0);
		//test == {3, 2, 3}
		test[1] = 2;
		std::vector<int>::iterator iterator;
		iterator = easyfind(test, 2);
		std::cout << *iterator << std::endl;
		//test == {3, 2, 5}
		test[2] = 5;
		iterator = easyfind(test, 5);
		std::cout << *iterator << std::endl;
		iterator = easyfind(test, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
