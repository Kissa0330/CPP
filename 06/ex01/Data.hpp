/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:54:55 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 16:51:58 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data
{
public:
	Data();
	Data(int value);
	~Data();
	Data(const Data &);
	Data &operator=(const Data &);
	int value;
};

#endif
