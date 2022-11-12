#include "./PhoneBook.hpp"

void	PhoneBook::index_init()
{
	this->index = 0;
}

void	PhoneBook::add_contact(Contact new_contact)
{
	this->contacts[this->index] = new_contact;
	if (this->index == 7)
	{
		while(this->index != 0)
		{
			this->contacts[this->index -1] = this->contacts[this->index];
			this->index--;
		}
	}
	else
		this->index ++;
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
	std::cout << "Add contact is successed !" << std::endl;
}

void	PhoneBook::SEARCH()
{
	int	i;

	std::cout << "Please type index." << std::endl;
	std::cin >> i;
	if (i >= 0 && i <= this->index && this-> index != 0)
		this->contacts[i].print_contact();
	else
		std::cout << "Error:index size error." << std::endl;
}
