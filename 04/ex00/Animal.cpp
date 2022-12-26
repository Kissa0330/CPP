/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:03:36 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/26 23:19:48 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "null";
	std::cout << "Animal default constructor is called." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal default constructor is called." << std::endl;
}

Animal::Animal(const Animal &origin)
{
	this->type = origin.type;
	std::cout << "Animal copy constructor is called." << std::endl;
}

Animal &Animal::operator=(const Animal &origin)
{
	this->type = origin.type;
	std::cout << "Animal copy operator is called." << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "BowWow" << std::endl;
}