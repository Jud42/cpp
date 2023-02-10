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
	
	//std::ios::sync_with_stdio(true);
	std::string	argument[5] = {"First name: ", "Last name: ", "Nick name: ",\
	   	"Phone number: ", "Darkest secret: "};
	for (int i = 0; i < 5; i++) {

		std::cout << argument[i];
		//std::cin >> _info[i];	
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//while (std::cin.get() != '\n');
		std::getline(std::cin, _info[i]);
		std::cin.clear();
		while (_info[i] == "") {

			std::cout << "Error: missing information" << std::endl;
			std::cout << argument[i];
			//std::cin >> _info[i];
			std::getline(std::cin, _info[i]);
			std::cin.clear();
		}
		//std::cin.unsetf(std::ios::adjustfield | std::ios::basefield | std::ios::floatfield);
	}
}
