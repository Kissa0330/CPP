/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:04 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 17:34:40 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void throw_test()
{
	try
	{
		Bureaucrat test1("test",151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test2("test",0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test3("test",1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test4("test",150);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void operator_test()
{
	try
	{
		Bureaucrat test("test", 1);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void upGrade_test()
{
	try
	{
		Bureaucrat test("test", 2);
		test.upGrade();
		std::cout << test;
		test.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void downGrade_test()
{
	try
	{
		Bureaucrat test("test", 149);
		test.downGrade();
		std::cout << test;
		test.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	throw_test();
	operator_test();
	upGrade_test();
	downGrade_test();
	return 0;
}
