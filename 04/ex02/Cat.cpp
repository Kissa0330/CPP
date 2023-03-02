/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:16:02 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/02 17:46:17 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor is called." << std::endl;
}

Cat::Cat(const Cat &origin) : Animal("Cat")
{
	this->_type = origin._type;
	this->brain = new Brain(*(origin.brain));
	std::cout << "Cat copy constructor is called." << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
{
	this->_type = origin._type;
	delete this->brain;
	this->brain = new Brain(*(origin.brain));
	std::cout << "Cat copy operator is called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor is called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "...(Cat don't bark.)" << std::endl;
}

void Cat::printIdea(int index) const
{
	std::cout << this->brain->idea[index] << std::endl;
}

void Cat::changeIdea(std::string idea, int index)
{
	this->brain->idea[index] = idea;
}
