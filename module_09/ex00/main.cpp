#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int	main(int ac, char *av[])
{
	if (ac == 2) {
		std::ifstream	ifs(av[1]);
		if (ifs.is_open()) {
			BitcoinExchange	be;
			std::string line;
			std::getline(ifs, line);
			while(std::getline(ifs, line)) {
				be.displayChange(line);
			}
		}
		else
			std::cout << "File not found" << std::endl;
		return 0;
	} 
	(void)av;
	std::cout << "Error: could not open file." << std::endl;
	return 1;
}

