/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:58:45 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 20:48:45 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char const *argv[])
{
	std::ifstream	origin_file;
	std::ofstream	new_file;
	std::string		str;
	std::string		new_file_name;
	int				i;

	if (argc != 4)
	{
		std::cerr << "Invalid arg number." << std::endl;
		return -1;
	}
	origin_file.open(argv[1]);
	if (origin_file.fail())
	{
		std::cerr << "Failed to open file." << std::endl;
		return -1;
	}
	new_file_name = (std::string)argv[1] + ".replace";
	new_file.open(new_file_name.c_str());
	if (new_file.fail())
	{
		std::cerr << "Failed to open file." << std::endl;
		return -1;
	}
	if (argv[2][0] == '\0')
	{
		std::cerr << "Invalid s1." << std::endl;
		return -1;
	}
	while (getline(origin_file, str))
	{
		i = (int)str.find(argv[2]);
		while(i != -1)
		{
			str.erase(i, strlen(argv[2]));
			str.insert(i, argv[3]);
			i = (int)str.find(argv[2], i + strlen(argv[3]));
		}
		new_file << str << std::endl;
	}
	return 0;
}
