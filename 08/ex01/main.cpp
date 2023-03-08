/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:28:41 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 13:21:07 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	//basic test
	try
	{
		std::cout << "basic test" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "print arr" << std::endl;
		sp.printArr();
		sp.addNumber(1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	//shortestSpan test
	try
	{
		std::cout << "too short test when length = 0 in shortestSpan" << std::endl;
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "too short test when length = 1 in shortestSpan" << std::endl;
		Span sp = Span(1);
		sp.addNumber(6);
		std::cout << "print arr" << std::endl;
		sp.printArr();
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	//longestSpan test
	try
	{
		std::cout << "too short test when length = 0 in longestSpan" << std::endl;
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "too short test when length = 1 in longestSpan" << std::endl;
		Span sp = Span(1);
		sp.addNumber(6);
		std::cout << "print arr" << std::endl;
		sp.printArr();
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
