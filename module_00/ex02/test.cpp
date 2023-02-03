#include <iostream>
#include <iomanip>

int main()
{
	int	x = 255;
	
	std::cout << x << std::endl;
	std::cout << std::setiosflags(std::ios::hex) << x << std::endl;
	std::cout << std::resetiosflags(std::ios::hex) << std::endl;
}
