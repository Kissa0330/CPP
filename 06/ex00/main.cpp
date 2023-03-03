/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:12:58 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/03 15:22:27 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		return -1;
	}
	Cast test((std::string) argv[1]);
	test.printTarget();
	return 0;
}
