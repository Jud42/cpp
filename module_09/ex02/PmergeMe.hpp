#ifndef _PMERGEME_HPP_
 #define _PMERGEME_HPP_

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <algorithm>

class PmergeMe	{

	public:
		PmergeMe(char** av);
		
		/*
		PmergeMe(const PmergeMe &src);
		PmergeMe & operator=(const PmergeMe &rhs);
		*/
		
		~PmergeMe();

		std::vector<int> &getDataVect(void);
		std::deque<int> &getDataDeque(void);
	
		void mergeSort(std::vector<int> &);
		void mergeSort(std::deque<int> &);
		void merge(std::vector<int> &, 
			std::vector<int> &,std::vector<int> &);
		void merge(std::deque<int> &, 
			std::deque<int> &,std::deque<int> &);
		void insertion(std::vector<int> &);
		void insertion(std::deque<int> &);
	
	private:
		std::vector<int> _data_v;
		std::deque<int>	_data_d;
		double time_exec_v;
		double time_exec_d;

};	

template<typename T>
void printData(std::string str, T &data);

#endif
