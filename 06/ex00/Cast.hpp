/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:17:15 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 14:58:55 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>
#include <string.h>

class Cast
{
private:
	std::string type;
	std::string target;
	void judgeType();
public:
	Cast();
	Cast(std::string target);
	Cast(const Cast &origin);
	~Cast();
	Cast &operator=(const Cast &origin);
	void printTarget();
	std::string getType();
};

#endif
