/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:33:03 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/05 18:53:14 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	unsigned int size;
	std::vector<int> arr;

public:
	span();
	span(unsigned int size);
	span(const Span &origin);
	~span();
	Span &operator=(const Span &origin);
	void addNumber(const int n);
	void addNumbers(const int n, const int count);
	int longestSpan();
	int shortestSpan();
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