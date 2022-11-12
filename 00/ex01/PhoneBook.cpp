#include "./PhoneBook.hpp"

void	PhoneBook::length_init()
{
	this->length = 0;
}

void	PhoneBook::add_contact(Contact new_contact)
{
	if (this->length == 8)
	{
		for (size_t i = 0; i < 7; i ++)
			this->contacts[i] = this->contacts[i + 1];
		this->length --;
	}
	this->contacts[this->length] = new_contact;
	this->length ++;
}

void	PhoneBook::ADD()
{
	Contact		new_contact;
	std::string	input;

	std::cout << "Please type last_name" << std::endl;
	std::cin >> input;
	if (input == "")
	{
		std::cout << "Error empty string" << std::endl;
		return ;
	}
	new_contact.set_last_name(input);

	std::cout << "Please type first_name" << std::endl;
	std::cin >> input;
	if (input == "")
	{
		std::cout << "Error empty string" << std::endl;
		return ;
	}
	new_contact.set_first_name(input);

	std::cout << "Please type nick_name" << std::endl;
	std::cin >> input;
	if (input == "")
	{
		std::cout << "Error empty string" << std::endl;
		return ;
	}
	new_contact.set_nick_name(input);

	std::cout << "Please type phone_number" << std::endl;
	std::cin >> input;
	if (input == "")
	{
		std::cout << "Error empty string" << std::endl;
		return ;
	}
	new_contact.set_phone_number(input);

	std::cout << "Please type darkest_secret" << std::endl;
	std::cin >> input;
	if (input == "")
	{
		std::cout << "Error empty string" << std::endl;
		return ;
	}
	new_contact.set_darkest_secret(input);
	this->add_contact(new_contact);
	std::cout << "Add contact is successed!" << std::endl;
}

void	PhoneBook::SEARCH()
{
	for (size_t i = 0; i < this->length; i++)
		this->contacts[i].print_contact(i);
}
