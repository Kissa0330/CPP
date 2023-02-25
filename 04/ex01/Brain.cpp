/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 02:47:10 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 03:13:00 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = "idea";
	}
	std::cout << "Brain constructor is called." << std::endl;
}

Brain::Brain(const Brain &origin)
{
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = origin.idea[i];
	}
	std::cout << "Brain copy constructor is called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called." << std::endl;
}

Brain &Brain::operator=(const Brain &origin)
{
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = origin.idea[i];
	}
	std::cout << "Brain copy operator is called." << std::endl;
	return *this;
}
