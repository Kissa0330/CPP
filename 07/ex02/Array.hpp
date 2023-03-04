/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:57:52 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 21:51:01 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <class T>
class Array
{
private:
	T *data;
	unsigned int size;

public:
	Array() : size(0)
	{
		std::cout << "Array default null constructor is called." << std::endl;
		this->data = NULL;
	};
	Array(const unsigned int size) : size(size)
	{
		std::cout << "Array default constructor is called." << std::endl;
		this->data = new T[size];
	};
	Array(const Array &origin) : size(origin.size)
	{
		std::cout << "Array copy constructor is called." << std::endl;
		this->data = new T[this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->data[i] = origin.data[i];
		}
	};
	~Array()
	{
		delete[] data;
	};
	Array &operator=(const Array &origin)
	{
		std::cout << "Array copy operator is called." << std::endl;
		if (this != &origin)
		{
			if (this->size > 0)
			{
				delete[] this->data;
			}
			this->data = new T[this->size];
			this->size = origin.size;
			for (size_t i = 0; i < this->size; i++)
			{
				this->data[i] = origin.data[i];
			}
		}
		return *this;
	};
	T &operator[](int index)
	{
		if (index < 0 || index >= static_cast<int>(size))
		{
			throw std::out_of_range("this index is out of range.");
		}
		return this->data[index];
	}
	unsigned int getSize() const
	{
		return this->size;
	};
	T *getData() const
	{
		return this->data;
	};
};

#endif
