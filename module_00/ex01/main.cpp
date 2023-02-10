#include "main.h"

int	main()
{
	PhoneBook	p;
	std::string	input;

	std::cout << "Enter one of these commands: 1.ADD 2.SEARCH 3.EXIT";
	std::cout << std::endl;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD") p.add_();
		else if (input == "SEARCH") p.search_();
		else if (input == "EXIT") p.exit_();
		else
			std::cout << "Error: command not recongnized" << std::endl;
		std::cout << "(ADD) (SEARCH) (EXIT)" << std::endl;
	}
	return 0;
}
