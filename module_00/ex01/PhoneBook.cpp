#include "main.h"

void	PhoneBook::add_()
{
	if (index > 7)
	{
		for (int i = 0; i < 7; i++)
			contact[i] = contact[i + 1];
		contact[index - 1] = new Contact;
	}
	else
		contact[index] = new Contact;
	if (index != 8)
		index++;
}
		
void	PhoneBook::search_() const
{
	int input;
	
	std::cout << "Index contact: ";
	if(std::cin >> input){
		if (input - 1 > 7){
			std::cout << "Phonebook contains 8 contact" << std::endl;}
		else if (contact[input - 1] != nullptr){	
			std::cout << input << "|";
			for (int i = 0; i < 3; i++){
				if (contact[input - 1]->data[i].length() > 10)
					std::cout << contact[input - 1]->data[i].substr(0, 9) + ".";
				else
					std::cout << contact[input - 1]->data[i];
				if (i != 2)
					std::cout << "|";
			}
			std::cout << std::endl;
		}
		else {std::cout << "contact: " << input << " doesn't exist"; 
			std::cout << std::endl;}
	}
	else {std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Error: Input!" << std::endl;
	}
}

void	PhoneBook::exit_()
{
	for (int i = 0; contact[i] != nullptr; i++)
		delete contact[i];
	exit(0);
}
