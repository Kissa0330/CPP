/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:04 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 18:59:20 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void throw_test()
{
	try
	{
		Form test1("test1", 151, 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form test2("test2", 150, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form test3("test3", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form test4("test4", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void sign_test()
{
	try
	{
		Form test1("test1", 149, 149);
		Bureaucrat test2("test2", 149);
		test2.signForm(test1);
		std::cout << test1.getIsSigned() << std::endl;
		Bureaucrat test3("test3", 150);
		test3.signForm(test1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	throw_test();
	sign_test();
	return 0;
}
