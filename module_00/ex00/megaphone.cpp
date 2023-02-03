#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	std::string str;

	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (int j = 0; j < str.length(); j++)
			str[j] = std::toupper(str[j]);
		std::cout << str << " ";
	}
	std::cout << std::endl;
	return 0;
}
