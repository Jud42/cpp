#include <iostream>

int	main()
{
	std::string var("HI THIS IS BRAIN");
	std::string *ptr = &var;
	std::string ref = var;
	
	//memory addr var
	std::cout << "the memory address of the string variable: "; 
	std::cout << &var << std::endl;

	//memory addr held by ptr	
	std::cout << "the memory address held by stingPTR: "; 
	std::cout << ptr << std::endl;

	//memory addr held by ref
	std::cout << "the memory address held by stringREF: "; 
	std::cout << &var << std::endl;
}
