#ifndef _PMERGEME_HPP_
 #define _PMERGEME_HPP_

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <cstdlib>
#include <cstring>
#include <algorithm>

class PmergeMe	{

	public:
		PmergeMe(char** av);
		
		/*
		PmergeMe(const PmergeMe &src);
		PmergeMe & operator=(const PmergeMe &rhs);
		*/
		
		~PmergeMe();


		//merge-insert vector
		void mergeSort(std::vector<int> &);
		void merge(std::vector<int> &, 
			std::vector<int> &,std::vector<int> &);
		void insertion(std::vector<int> &);

		//merge-insert list
		void mergeSort(std::list<int> &);
		void merge(std::list<int> &, 
			std::list<int> &,std::list<int> &);
		void insertion(std::list<int> &);

		//print element
		void printData(std::string str, std::vector<int> &);

	//private:
		std::vector<int> _data_vect;
		std::list<int>	_data_list;

};

#endif
