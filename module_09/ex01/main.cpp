#include "RPN.hpp"

int	main(int ac, char *av[])
{
	if (ac == 2) {
		
		RPN rpn(av[1]);
		return 0;
	}
	std::cout << "Error argument" << std::endl;
	return 1;
}
