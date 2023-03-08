/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:54:38 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 16:52:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t> (ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *> (raw);
}

int main()
{
	Data *data1 = new Data(150);
	Data *data2;
	uintptr_t pt;

	std::cout << data1->value << std::endl;
	pt = serialize(data1);
	std::cout << pt << std::endl;
	data2 = deserialize(pt);
	std::cout << data2->value << std::endl;
	delete data1;
	return 0;
}
