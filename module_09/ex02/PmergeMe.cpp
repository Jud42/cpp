#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const int &ac, char** av) 
	: _size(ac - 1) {
	
	++av;
	int tmp;
	for (int i = 0; i < _size; i++) {
		for (int j = 0; av[i][j]; j++) {
			if ((j == 0 && av[i][j] != '-' && 
			!std::isdigit(av[i][j])) || !std::isdigit(av[i][j]))
				throw std::invalid_argument("Invalid argument");
		}
		tmp = std::atoi(av[i]);
		_data_vect.push_back(tmp);
		_data_list.push_back(tmp);
	}
}

void PmergeMe::printData(std::string str, std::vector<int> &data) {
	
	std::vector<int>::iterator it;
	std::vector<int>::iterator it_end = data.end();

	std::cout << str;
	for (it = data.begin(); it != it_end; it++) {
		std::cout << *it;
		if (it + 1 != data.end())
			std::cout << ' ';
	}
	std::cout << std::endl;
}

/*
PmergeMe::PmergeMe(const PmergeMe &src) 
	: _size(src._size), _data(src._data) {}

PmergeMe & PmergeMe::operator=(const PmergeMe &rhs) {

	if (this != &rhs) {
		
		this->_data = rhs._data;
		this->_size = rhs._size;
	}
	return *this;
}
*/


PmergeMe::~PmergeMe() {}

void	PmergeMe::mergeSortVect(std::vector<int> &data) {

	std::vector<int> tmp;

	if (data.size() == 1)
		return ;
	int	mid = data.size() / 2;
	std::vector<int> left(data.begin(), data.end() - mid);
	std::vector<int> right(data.begin() + mid, data.end());
	printData("left: ", left);
	mergeSortVect(left);
	printData("left after: ", left);
	printData("right: ", right);
	mergeSortVect(right);
	printData("right after: ", right);
	mergeInsertVect(left, right, data);
}

void	PmergeMe::mergeInsertVect(std::vector<int> &left, 
	std::vector<int> &right, std::vector<int> &data) {

	std::cout << "\n----MERGE INSTERT---" << std::endl;
	printData("left final: ", left);
	printData("right final: ", right);
	printData("data before: ", data);
	std::cout << "---------------------\n" << std::endl;


	

/*
	int i = 0, j = 0, k = 0;
	while (j < left.size() && k < right.size()) {
		
		while (left[j] > data[i]) {
			data[i] = left[j];
		}
	}
	for (int i = 0; i < data.size(); i++) {

		if (left[])
	}
*/
}
