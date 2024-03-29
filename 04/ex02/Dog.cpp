/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:16:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 22:02:38 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor is called." << std::endl;
}

Dog::Dog(const Dog &origin) : Animal("Dog")
{
	this->_type = origin._type;
	this->brain = new Brain(*(origin.brain));
	std::cout << "Dog copy constructor is called." << std::endl;
}

Dog &Dog::operator=(const Dog &origin)
{
	if (this != &origin)
	{
		this->_type = origin._type;
		delete this->brain;
		this->brain = new Brain(*(origin.brain));
	}
	std::cout << "Dog copy operator is called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor is called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wan!Wan!" << std::endl;
}

void Dog::printIdea(int index) const
{
	std::cout << this->brain->idea[index] << std::endl;
}

void Dog::changeIdea(std::string idea, int index)
{
	this->brain->idea[index] = idea;
}
