/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:03:36 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/23 21:22:37 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "null";
	std::cout << "Animal default constructor is called." << std::endl;
}

Animal::Animal(std::string _type)
{
	this->_type = _type;
	std::cout << "Animal default constructor is called." << std::endl;
}

Animal::Animal(const Animal &origin)
{
	this->_type = origin._type;
	std::cout << "Animal copy constructor is called." << std::endl;
}

Animal &Animal::operator=(const Animal &origin)
{
	this->_type = origin._type;
	std::cout << "Animal copy operator is called." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "BowWow" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}
