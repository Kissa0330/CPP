#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#  include "./Contact.hpp"
class PhoneBook
{
	public:
		void	increment_index(int index);
		void	ADD(int index, Contact contacts[8]);
		void	SEARCH();
		void	EXIT();
	private:
		Contact	contacts[8];
		int		index;
};
#endif