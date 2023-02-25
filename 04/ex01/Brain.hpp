/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:27:18 by rtakano           #+#    #+#             */
/*   Updated: 2023/02/26 03:13:49 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &origin);
	Brain &operator=(const Brain &origin);
	~Brain();
	std::string idea[100];
};

#endif
