/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:28:19 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/12 20:52:11 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	// basic_test
	{
		std::cout << "basic_test" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "mstack" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<int> mstack2(mstack);
		MutantStack<int>::iterator it2 = mstack2.begin();
		MutantStack<int>::const_iterator c_ite = mstack2.end();
		std::cout << "mstack2" << std::endl;
		while (it2 != c_ite)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
		MutantStack<int> mstack3 = mstack;
		MutantStack<int>::iterator it3 = mstack2.begin();
		MutantStack<int>::const_iterator ite3 = mstack2.end();
		std::cout << "mstack3" << std::endl;
		while (it3 != ite3)
		{
			std::cout << *it3 << std::endl;
			++it3;
		}
		
		std::stack<int> s(mstack);
	}
	// self_assignment_test
	{
		MutantStack<int> *mstack1 = new MutantStack<int>();
		MutantStack<int> *mstack2 = NULL;

		(*mstack1).push(1);
		mstack2 = mstack1;
		mstack1 = mstack2;
		delete mstack1;
	}
	return 0;
}
