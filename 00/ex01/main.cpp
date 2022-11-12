#include "./PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string input;

	phone_book.index_init();
	while(1)
	{
		std::cout << "Please type command." << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phone_book.ADD();
		else if (input == "SEARCH")
			phone_book.SEARCH();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Error:wrong commmand." << std::endl;
	}
	return (0);
}
