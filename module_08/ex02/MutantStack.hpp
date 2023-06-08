#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <stack>
#include <iostream>
/*
template< typename T >
class MutantStack {

	public:
		bool empty() const { return _stack.empty(); }
		size_t size() const { return _stack.size(); }
		const T & top() const { return _stack.top(); }
		void push(const T &val) { return _stack.push(val); }
		void pop() { return _stack.pop(); }
		
		void test() { 
			std::deque<T>& tmp = const_cast<std::deque<T>&>(_stack.c);
		}
	private:
		std::stack< T > _stack;
};
*/




template <typename T, typename C_type = std::deque<T> >
class MutantStack : public std::stack<T, C_type>
{
	public:
		typedef typename C_type::reverse_iterator iterator;
		typedef typename C_type::const_reverse_iterator const_iterator;	
		iterator begin() { return this->c.rbegin(); }
		iterator end() { return this->c.rend(); }
		const_iterator cbegin() const { return this->c.crbegin(); }
		const_iterator cend() const { return this->c.crend(); }
		
		typedef typename C_type::iterator reverse_iterator;
		typedef typename C_type::const_iterator reverse_const_iterator;
		reverse_iterator rbegin() { return this->c.begin(); }
		reverse_iterator rend() { return this->c.end(); }
		reverse_const_iterator crbegin() const { return this->c.cbegin(); }
		reverse_const_iterator crend() const { return this->c.cend(); }


};

#endif
