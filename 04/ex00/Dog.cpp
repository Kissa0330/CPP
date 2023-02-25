/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:16:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/25 22:08:41 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor is called." << std::endl;
}

Dog::Dog(const Dog &origin) : Animal("Dog")
{
	this->_type = origin._type;
	std::cout << "Dog copy constructor is called." << std::endl;
}

Dog &Dog::operator=(const Dog &origin)
{
	this->_type = origin._type;
	std::cout << "Dog copy operator is called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wan!Wan!" << std::endl;
}
