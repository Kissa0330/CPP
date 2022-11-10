#include "./PhoneBook.hpp"

void	PhoneBook::index_init()
{
	this->index = 0;
}

void	PhoneBook::add_contact(Contact new_contact)
{
	this->contacts[this->index] = new_contact;
	this->contacts[this->index].print_contact();
}

void	PhoneBook::ADD()
{
	Contact		new_contact;
	std::string	input;

	std::cout << "Please type last_name" << std::endl;
	std::cin >> input;
	if (input == "")
		return ;
	new_contact.set_last_name(input);

	std::cout << "Please type firts_name" << std::endl;
	std::cin >> input;
	if (input == "")
		return ;
	new_contact.set_first_name(input);

	std::cout << "Please type nick_name" << std::endl;
	std::cin >> input;
	if (input == "")
		return ;
	new_contact.set_nick_name(input);

	std::cout << "Please type phone_number" << std::endl;
	std::cin >> input;
	if (input == "")
		return ;
	new_contact.set_phone_number(input);

	std::cout << "Please type darkest_secret" << std::endl;
	std::cin >> input;
	if (input == "")
		return ;
	new_contact.set_darkest_secret(input);
	this->add_contact(new_contact);
}

void	PhoneBook::SEARCH()
{
	
}
