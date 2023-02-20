#include "Contact.hpp"

Contact::Contact() {

	for (int i = 0; i < 5; i++) {
		
		_info[i] = "";
	}	
}

std::string	Contact::getInfo(int n) const {

	return _info[n]; //safe bet 
}

void	Contact::setContact() {
	
	std::string	argument[5] = {"First name: ", "Last name: ", "Nick name: ",\
	   "Phone number: ", "Darkest secret: "};
	for (int i = 0; i < 5; i++) {

		_info[i].clear();	
		std::cout << argument[i];
		while (_info[i].empty()) {

			std::getline(std::cin, _info[i]);
		}
	}
}
