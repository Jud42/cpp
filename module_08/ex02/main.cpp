#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
	/*
	//Instance Stack->vector
	//MutantStack< int, std::vector<int> > mstack;
	
	//Instance Stack->deque par defaut
	MutantStack< int > mstack;
	
	//TEST FUNCTION MEMBER
	std::cout << "is empty? bool: " << mstack.empty() << std::endl;

	mstack.push(1);
	mstack.push(8);
	mstack.push(6);
	mstack.push(9);

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "element top: " << mstack.top() << std::endl;

	//TEST ITERATOR STACK -> Deque	
	MutantStack< int >::iterator start = mstack.begin();
	MutantStack< int >::iterator end = mstack.end();
	
	while (start != end) {
		std::cout << *start << std::endl;
		start++;
	}

	//TEST ITERATOR STACK -> Vector
	MutantStack< int, std::vector<int> >::iterator start = mstack.begin();
	MutantStack< int, std::vector<int> >::iterator end = mstack.end();
	
	while (start != end) {
		std::cout << *start << std::endl;
		start++;
	}*/

	/*----MAIN BY 42-----*/
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "SIZE:" << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
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
