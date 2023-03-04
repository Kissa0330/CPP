/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:41:33 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/04 17:50:14 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T> void	iter(T *array, int size, void function(T &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T> void	inclement(T &e)
{
	e ++;
}

#endif
