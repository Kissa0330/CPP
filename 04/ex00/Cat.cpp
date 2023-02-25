/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:16:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/25 22:07:01 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor is called." << std::endl;
}

Cat::Cat(const Cat &origin) : Animal("Cat")
{
	this->_type = origin._type;
	std::cout << "Cat copy constructor is called." << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
{
	this->_type = origin._type;
	std::cout << "Cat copy operator is called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "...(Cat don't bark.)" << std::endl;
}
