#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (Span::exceptionArray &e) {
		std::cout << e.what() << std::endl;
		return (0);
	}
	
	Span rp = Span(10);
	addRange(5, rp);
	for (int i = 0; i < 10; i++)
		std::cout << rp[i] << std::endl;
	return 0;
}
