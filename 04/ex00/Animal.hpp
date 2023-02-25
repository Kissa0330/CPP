/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:11:07 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/23 21:22:42 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal &origin);
	virtual ~Animal();
	Animal &operator=(const Animal &origin);
	virtual void makeSound() const;
	std::string getType() const;
};

#endif
