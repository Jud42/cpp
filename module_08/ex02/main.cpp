#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	/*----MAIN BY 42-----*/
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "\nTOP: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "SIZE: " << mstack.size() << '\n' << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
