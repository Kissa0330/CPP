/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:03:36 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/27 12:26:22 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "null";
	std::cout << "WrongAnimal default constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
	this->_type = _type;
	std::cout << "WrongAnimal default constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
	this->_type = origin._type;
	std::cout << "WrongAnimal copy constructor is called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin)
{
	this->_type = origin._type;
	std::cout << "WrongAnimal copy operator is called." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "BowWow" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}
