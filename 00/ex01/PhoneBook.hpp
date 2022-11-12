#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#  include "./Contact.hpp"

class PhoneBook
{
	public:
		void	length_init();
		void	add_contact(Contact new_contact);
		void	ADD();
		void	SEARCH();
	private:
		Contact	contacts[8];
		size_t	length;
};
#endif
