#include <iostream>

int	main()
{
	std::string var("HI THIS IS BRAIN");
	std::string *ptr = &var;
	std::string ref = var;
	
	//memory addr var
	std::cout << &var << std::endl;
	//memory addr held by ptr	
	std::cout << ptr << std::endl;
	//memory addr held by ref
	std::cout << &ref << std::endl;

	//value each var
	std::cout << var << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << var << std::endl;
}
