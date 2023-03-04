/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:11:03 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 17:34:32 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void Swap(T &a, T &b) {
    T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &Min(T &a, T &b) {
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <typename T>
T &Max(T &a, T &b) {
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

#endif
