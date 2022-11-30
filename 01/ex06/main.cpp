/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:06:59 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/30 11:45:17 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	size_t level;

	if (argc != 2)
	{
		std::cerr << "Error:invalid arg num." << std::endl;
		return -1;
	}
	level = harl.getLevel(argv[1]);
	switch (level)
	{
	case 0:
		std::cout << "[DEBUG]" << std::endl;
		harl.complain("DEBUG");
		/* Falls through. */
	case 1:
		std::cout << "[INFO]" << std::endl;
		harl.complain("INFO");
		/* Falls through. */
	case 2:
		std::cout << "[WARNING]" << std::endl;
		harl.complain("WARNING");
		/* Falls through. */
	case 3:
		std::cout << "[ERROR]" << std::endl;
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}
