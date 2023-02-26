/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:10:49 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 03:10:05 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain brain;
public:
	Dog();
	Dog(const Dog &origin);
	Dog &operator=(const Dog &origin);
	~Dog();
	virtual void makeSound() const;
	void printIdea(int index) const;
	void changeIdea(std::string idea, int index);
};


#endif
