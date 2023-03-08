/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:47:08 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 15:37:57 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime> 
#include <typeinfo>

Base *generate(void)
{
	int ranNum = std::rand() % 3;
	if (ranNum == 0)
	{
		return new A();
	}
	else if (ranNum == 1)
	{
		return new B();
	}
	return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast)
	{
	}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast)
	{
	}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast)
	{
	}
}

int main()
{
	Base *ranPt;
	std::srand( time(NULL) );

	ranPt = generate();
	identify(ranPt);
	identify(*ranPt);
	delete ranPt;
	return 0;
}
