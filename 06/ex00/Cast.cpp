/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:18:11 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 15:27:43 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()
{
	this->target = "0";
	this->judgeType();
	std::cout << "Cast constructor is called." << std::endl;
}

Cast::Cast(std::string target)
{
	this->target = target;
	this->judgeType();
	std::cout << "Cast constructor is called." << std::endl;
}

Cast::Cast(const Cast &origin)
{
	this->target = origin.target;
	this->type = origin.type;
	std::cout << "Cast copy constructor is called." << std::endl;
}

Cast::~Cast()
{
	std::cout << "Cast destructor is called." << std::endl;
}

Cast &Cast::operator=(const Cast &origin)
{
	this->target = origin.target;
	this->type = origin.type;
	std::cout << "Cast copy operator is called." << std::endl;
	return *this;
}

void printTargetChar(std::string target)
{
	char tgt = target[0];
	std::cout << "char: '" << tgt << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tgt) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " <<  static_cast<float>(tgt) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tgt) << std::endl;
}

void printTargetInt(std::string target)
{
	int tgt = atoi(target.c_str());
	std::cout << "char: ";
	if (tgt > 31 && tgt < 127)
	{
		std::cout << "'" << static_cast<char>(tgt) << "'" << std::endl;
	}
	else
	{
		std::cout << "non displayable" << std::endl;
	}
	std::cout << "int: " << tgt << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " <<  static_cast<float>(tgt) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tgt) << std::endl;
}

void printTargetDouble(std::string target)
{
	int tgt = static_cast<int>(atof(target.c_str()));
	std::cout << "char: ";
	if (tgt > 31 && tgt < 127)
	{
		std::cout << "'" << static_cast<char>(tgt) << "'" << std::endl;
	}
	else
	{
		std::cout << "non displayable" << std::endl;
	}
	std::cout << "int: " << tgt << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(atof(target.c_str())) << "f" << std::endl;
	std::cout << "double: " << atof(target.c_str()) << std::endl;
}

void printTargetFloat(std::string target)
{
	target[target.length() - 1] = '\0';
	int tgt = static_cast<int>(static_cast<float>(atof(target.c_str())));
	std::cout << "char: ";
	if (tgt > 31 && tgt < 127)
	{
		std::cout << "'" << static_cast<char>(tgt) << "'" << std::endl;
	}
	else
	{
		std::cout << "non displayable" << std::endl;
	}
	std::cout << "int: " << tgt << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(atof(target.c_str())) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(static_cast<float>(atof(target.c_str()))) << std::endl;
}

void printTargetNon(std::string target)
{
	(void) target;
	std::cerr << "Error: no literal" << std::endl;
}

void printTargetLimit(std::string target)
{
	if (target[0] == '+')
	{
		target.erase(0,1);
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << target << "f" << std::endl;
	std::cout << "double: " << target << std::endl;
}

void (*printTargetByType[6])(std::string target) = {
	printTargetChar,
	printTargetInt,
	printTargetDouble,
	printTargetFloat,
	printTargetNon,
	printTargetLimit
};

void Cast::printTarget()
{
	std::string types[6] = {"char", "int", "double", "float", "non", "limit"};

	if ((this->target.length() == 10 && strcmp(this->target.c_str(), "2147483647") > 0)
	|| (this->target[0] == '+' && this->target.length() == 11 && strcmp(this->target.c_str(), "+2147483647") > 0)
	|| (this->target[0] == '-' && this->target.length() == 11 && strcmp(this->target.c_str(), "-2147483648") > 0)
	|| this->target.length() > 11)
	{
		std::cerr << "Error: Out of int range" << std::endl;
		return;
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (this->type == types[i])
		{
			printTargetByType[i](this->target);
			return;
		}
	}
}

void Cast::judgeType()
{
	size_t i = 0;
	char c;
	bool isInt = true;

	c = this->target[0];
	if (this->target.length() == 1)
	{
		
		if (c < '0' || c > '9')
		{
			this->type = "char";
			return;
		}
	}
	const std::string	limits[4] = {"inf" , "+inf", "-inf", "nan"};
	for (size_t i = 0; i < 4; i++)
	{
		if (this->target == limits[i])
		{
			this->type = "limit";
			return;
		}
	}
	if (c == '+' || c == '-')
	{
		i++;
	}
	while (i < target.length() - 1)
	{
		c = this->target[i];
		if ((c < '0' || c > '9') && c != '.')
		{
			this->type = "non";
			return;
		}
		if (c == '.')
		{
			isInt = false;
			i++;
			break;
		}
		i++;
	}
	while (i < target.length() - 1)
	{
		c = this->target[i];
		if (c < '0' || c > '9')
		{
			this->type = "non";
			return;
		}
		i++;
	}
	c = this->target[i];
	if (c >= '0' && c <= '9')
	{
		if (isInt)
		{
			this->type = "int";
			return;
		}
		else
		{
			this->type = "double";
			return;
		}
	}
	if (c == 'f')
	{
		this->type = "float";
		return;
	}
	this->type = "non";
}

std::string Cast::getType()
{
	return this->type;
}
