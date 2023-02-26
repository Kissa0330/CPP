/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:10:49 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 03:10:12 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain brain;
public:
	Cat();
	Cat(const Cat &origin);
	Cat &operator=(const Cat &origin);
	~Cat();
	virtual void makeSound() const;
	void printIdea(int index) const;
	void changeIdea(std::string idea, int index);
};


#endif
