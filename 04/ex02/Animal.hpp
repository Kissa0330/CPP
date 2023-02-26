/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:11:07 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 13:19:08 by rtakano          ###   ########.fr       */
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
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
