#include "PhoneBook.hpp"

void	PhoneBook::add_() {

	if (_index > 7) {

		for (int i = 0; i < 7; i++)
			_contact[i] = _contact[i + 1];
		_contact[_index - 1].setContact();
	}
	else {

		_contact[_index].setContact();
		_index++;
	}
}
		
void	PhoneBook::print_contact(int i) const {
	
	const int	raw_w = 10;
	std::cout << std::setw(raw_w) << std::right << "Index" << "|"
        << std::setw(raw_w) << std::right << "First Name" << "|"
        << std::setw(raw_w) << std::right << "Last Name" << "|"
        << std::setw(raw_w) << std::right << "Nick Name" << std::endl;

	std::cout << std::setw(raw_w) << std::setiosflags(std::ios::fixed) 
	<< std::setprecision(0) << std::setiosflags(std::ios::right) << 1 << "|";
	for (int j = 0; j < 3; j++) {

	std::string tmp = _contact[i].getInfo(j);
        std::cout << std::setw(raw_w) << std::right 
	<< (tmp.length() > raw_w - 1 ? tmp.substr(0, raw_w - 1) + "." : tmp) << "|";
	}
	std::cout << std::endl;

}

void	PhoneBook::search_() const
{
	int input;

	for (int i = 0; i < _index; i++)
		print_contact(i);

	std::cout << "Index contact: ";
	if(std::cin >> input) {
		
		if (input > 8 || input < 1)
			std::cerr << "Error: Phonebook contains 8 contact 1-8" << std::endl;
		else if (input > _index) 	
			std::cout << "contact: [" << input << "] doesn't exist"; 
		else 
			print_contact(input - 1);
		std::cout << std::endl;
	}
}

void	PhoneBook::exit_() { exit(0); }
