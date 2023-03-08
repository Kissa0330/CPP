/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:29:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/05 19:14:12 by rtakano          ###   ########.fr       */
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
	if (this->size == vector.size())
	{
		throw SpanIsFull();
	}
	this->arr.push_back(n);
}

void Span::addNumbers(const int n, const int count)
{
	
}

int Span::longestSpan()
{
	
}

int Span::shortestSpan()
{
	
}

const char *Span::SpanIsFull::what()
{
	return "Span is full.";
}

const char *Span::SpanIsTooShort::what()
{
	return "Span is too short.";
}