#ifndef _PHONEBOOK_
 # define _PHONEBOOK_

#include <iomanip>
#include "Contact.hpp"
#include "main.h"

class PhoneBook {
	public:

		PhoneBook() : _index(0) {}
		void	add_();
		void	search_() const;
		void	exit_();
		~PhoneBook() {}

	private:

		void print_contact(int i) const;

		Contact	_contact[8];
		int		_index;
};

#endif
