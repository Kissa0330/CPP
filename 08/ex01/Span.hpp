/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:33:03 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/12 20:47:40 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int size;
	std::vector<int> arr;

public:
	Span();
	Span(unsigned int size);
	Span(const Span &origin);
	~Span();
	Span &operator=(const Span &origin);
	void addNumber(const int n);
	void addNumbers(const int n, const int count);
	int longestSpan();
	int shortestSpan();
	void printArr() const;
	class SpanIsFull : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class SpanIsTooShort : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif
