/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:16:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/25 22:09:00 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor is called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal("Cat")
{
	this->_type = origin._type;
	std::cout << "WrongCat copy constructor is called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &origin)
{
	this->_type = origin._type;
	std::cout << "WrongCat copy operator is called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "...(WrongCat don't bark.)" << std::endl;
}
