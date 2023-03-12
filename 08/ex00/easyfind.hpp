/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:27:19 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/12 20:45:25 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &arr, int needle)
{
	typename T::iterator res = std::find(arr.begin(), arr.end(), needle);
	if (res == arr.end())
		throw std::runtime_error("Needle is not exist.");
	return res;
}

#endif
