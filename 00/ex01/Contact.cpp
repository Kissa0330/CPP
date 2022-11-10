#include "./Contact.hpp"

void	Contact::set_last_name(std::string input)
{
	this->last_name = input;
}

void	Contact::set_first_name(std::string input)
{
	this->first_name = input;
}

void	Contact::set_nick_name(std::string input)
{
	this->nick_name = input;
}

void	Contact::set_phone_number(std::string input)
{
	this->phone_number = input;
}

void	Contact::set_darkest_secret(std::string input)
{
	this->darkest_secret = input;
}

void	Contact::print_contact()
{
	std::cout << "firstname: " << this->first_name << std::endl;
	std::cout << "lastname: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nick_name << std::endl;
	std::cout << "phonenumber: " << this->phone_number << std::endl;
	std::cout << "phonenumber: " << this->darkest_secret << std::endl;
}
