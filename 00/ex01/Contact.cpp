#include "./Contact.hpp"

void Contact::set_last_name(std::string input)
{
	this->last_name = input;
}

void Contact::set_first_name(std::string input)
{
	this->first_name = input;
}

void Contact::set_nick_name(std::string input)
{
	this->nick_name = input;
}

void Contact::set_phone_number(std::string input)
{
	this->phone_number = input;
}

void Contact::set_darkest_secret(std::string input)
{
	this->darkest_secret = input;
}

void Contact::print_contact(size_t length)
{
	for (size_t i = 0; 1 + i <= 10; i++)
		std::cout << " ";
	std::cout << length << "|";
	print_ten_chars(this->last_name);
	print_ten_chars(this->first_name);
	print_ten_chars(this->nick_name);
	print_ten_chars(this->phone_number);
	std::cout << std::endl;
}

void Contact::print_ten_chars(std::string str)
{
	size_t len;

	len = str.length();
	for (size_t i = 0; len + i < 10; i++)
		std::cout << " ";
	for (size_t i = 0; i < len && i < 9; i++)
	{
		std::cout << str[i];
		if (i == 8)
			std::cout << '.';
	}
	std::cout << "|";
}
