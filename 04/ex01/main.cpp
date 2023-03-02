/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:03:40 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 17:45:00 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void testArray()
{
	Animal *arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = new Dog();
		}
		else
		{
			arr[i] = new Cat();
		}
	}
	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
}

void deepCopyTest()
{
	Dog dog1 = Dog();
	Dog dog2 = dog1;
	dog1.changeIdea("this is dog1", 0);
	dog2.changeIdea("this is dog2", 0);
	dog1.printIdea(0);
	dog2.printIdea(0);

	Cat cat1 = Cat();
	Cat cat2 = cat1;
	cat1.changeIdea("this is cat1", 0);
	cat2.changeIdea("this is cat2", 0);
	cat1.printIdea(0);
	cat2.printIdea(0);
	Dog dog3 = Dog();
	{
		Dog tmp;
		tmp = dog3;
	}
}

int main()
{
	testArray();
	deepCopyTest();
}
