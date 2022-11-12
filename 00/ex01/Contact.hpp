#ifndef CONTACT_H
# define CONTACT_H

#  include <string>
#  include <iostream>

class Contact
{
private:
	std::string	last_name;
	std::string	first_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void	set_last_name(std::string input);
	void	set_first_name(std::string input);
	void	set_nick_name(std::string input);
	void	set_phone_number(std::string input);
	void	set_darkest_secret(std::string input);
	void	print_contact(size_t length);
	void	print_ten_chars(std::string str);
};

#endif
