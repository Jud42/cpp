#ifndef _PMERGEME_HPP_
 #define _PMERGEME_HPP_

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <cstdlib>
#include <cstring>

class PmergeMe	{

	public:
		PmergeMe(const int &ac, char** av);
		
		/*
		PmergeMe(const PmergeMe &src);
		PmergeMe & operator=(const PmergeMe &rhs);
		*/
		
		~PmergeMe();


		void mergeSortVect(std::vector<int> &);
		void mergeInsertVect(std::vector<int> &, 
			std::vector<int> &,std::vector<int> &);
		//std::list<int> mergeSortList(void);

		void printData(std::string str, std::vector<int> &);

		int	_size;
		std::vector<int> _data_vect;
		std::list<int>	_data_list;

};

#endif
