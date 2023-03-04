/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:54:49 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 16:51:49 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() :value(1)
{
	std::cout << "Data constructor is called." << std::endl;
}

Data::Data(int value): value(value)
{
	std::cout << "Data constructor is called." << std::endl;
}

Data::~Data()
{
	std::cout << "Data destructor is called." << std::endl;
}

Data::Data(const Data &) :value(1)
{
	std::cout << "Data copy constructor is called." << std::endl;
}

Data &Data::operator=(const Data &)
{
	std::cout << "Data copy operator is called." << std::endl;
	return *this;
}
