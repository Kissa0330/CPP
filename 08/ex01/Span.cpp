/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:29:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 13:16:01 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():size(0)
{
	std::cout << "Span constructor is called." << std::endl;
}

Span::Span(unsigned int size):size(size)
{
	std::cout << "Span constructor is called." << std::endl;
}

Span::Span(const Span &origin):size(origin.size)
{
	this->arr = std::vector<int> (origin.arr);
	std::cout << "Span copy constructor is called." << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor is called." << std::endl;
}

Span &Span::operator=(const Span &origin)
{
	if (this != &origin)
	{
		this->size = origin.size;
		this->arr = std::vector<int> (origin.arr);
	}
	std::cout << "Span copy operator is called." << std::endl;
	return *this;
}

void Span::addNumber(const int n)
{
	if (this->size == arr.size())
	{
		throw SpanIsFull();
	}
	this->arr.push_back(n);
}

void Span::addNumbers(const int n, const int count)
{
	if (this->size + count >= arr.size())
	{
		throw SpanIsFull();
	}
	std::vector<int> tmp(count, n);
	this->arr.insert(this->arr.end(), tmp.begin(), tmp.end());
}

int Span::longestSpan()
{
	if (this->size < 2)
	{
		throw SpanIsTooShort();
	}
	std::vector<int>::iterator maxElement = std::max_element(this->arr.begin(), this->arr.end());
	std::vector<int>::iterator minElement = std::min_element(this->arr.begin(), this->arr.end());
	return (*maxElement - *minElement);
}

int Span::shortestSpan()
{
	if (this->size < 2)
	{
		throw SpanIsTooShort();
	}
	std::vector<int> tmp = std::vector<int>(this->arr);
	int shortestSpan = INT_MAX;
	sort(tmp.begin(), tmp.end());
	for(unsigned int i = 0; i < arr.size() - 1; i++)
	{
		if (shortestSpan > tmp[i + 1] - tmp[i])
		{
			shortestSpan = tmp[i + 1] - tmp[i];
		}
	}
	return shortestSpan;
}

void Span::printArr() const
{
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

const char *Span::SpanIsFull::what() const throw()
{
	return "Span is full.";
}

const char *Span::SpanIsTooShort::what() const throw()
{
	return "Span is too short.";
}
