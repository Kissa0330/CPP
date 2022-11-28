/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:49:33 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/28 21:40:13 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "string address:" << std::hex << &string << std::endl;
	std::cout << "stringPTR address:" << std::hex << stringPTR << std::endl;
	std::cout << "stringREF address:" << std::hex << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string:" << std::hex << string << std::endl;
	std::cout << "stringPTR:" << std::hex << *stringPTR << std::endl;
	std::cout << "stringREF:" << std::hex << stringREF << std::endl;
	return 0;
}
