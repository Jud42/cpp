#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char** av) {
	
	++av;
	int tmp;
	for (int i = 0; av[i]; i++) {
		for (int j = 0; av[i][j]; j++) {
			if (!std::isdigit(av[i][j])) 
					throw std::invalid_argument("Error");
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

//merge-insert vector
void	PmergeMe::insertion(std::vector<int> &data) {

	int prev = 0;
	int tmp;
	for (size_t i = 1; i < data.size(); i++) { 
	
		prev = i - 1;
		while (prev >= 0 && data[prev] > data[prev + 1]) {
		
			tmp = data[prev];
			data[prev] = data[prev + 1];
			data[prev + 1] = tmp;
			prev--;
		}
	}
	printData("after insertion: ", data);
}

void	PmergeMe::mergeSort(std::vector<int> &data) {

	std::vector<int> tmp;

	std::cout << "size: " << data.size() << std::endl; 
	if (data.size() == 1)
		return ;
	else if (data.size() > 5) {

		int	mid = data.size() / 2;
		std::vector<int> left(data.begin(), data.begin() + mid);
		std::vector<int> right(data.begin() + mid, data.end());
		printData("left: ", left);
		mergeSortVect(left);
		printData("left after: ", left);
		printData("right: ", right);
		mergeSortVect(right);
		printData("right after: ", right);
		mergeVect(left, right, data);
	}
	else
		insertionVect(data);
}

void	PmergeMe::merge(std::vector<int> &left, 
	std::vector<int> &right, std::vector<int> &data) {

	std::cout << "\n----MERGE INSTERT---" << std::endl;
	printData("left final: ", left);
	printData("right final: ", right);
	printData("data before: ", data);


	size_t i = 0, l = 0, r = 0;
	while (l < left.size() && r < right.size()) {
		
		if (left[l] <= right[r]) {
			data[i] = left[l];
			l++;
		}
		else if (right[r] < left[l]) {
			data[i] = right[r];
			r++;
		}
		i++;
	}

	while (l < left.size()) 
		data[i++] = left[l++];
	
	while (r < right.size()) 
		data[i++] = right[r++];
	

	printData("data after: ", data);
	std::cout << "---------------------\n" << std::endl;


}

//merge-insert list
void	PmergeMe::insertion(std::list<int> &data) {

	int prev = 0;
	int tmp;
	for (size_t i = 1; i < data.size(); i++) { 
	
		prev = i - 1;
		while (prev >= 0 && data[prev] > data[prev + 1]) {
		
			tmp = data[prev];
			data[prev] = data[prev + 1];
			data[prev + 1] = tmp;
			prev--;
		}
	}
	printData("after insertion: ", data);
}

void	PmergeMe::mergeSort(std::list<int> &data) {

	std::list<int> tmp;

	std::cout << "size: " << data.size() << std::endl; 
	if (data.size() == 1)
		return ;
	else if (data.size() > 5) {

		int	mid = data.size() / 2;
		std::vector<int> left(data.begin(), data.begin() + mid);
		std::vector<int> right(data.begin() + mid, data.end());
		printData("left: ", left);
		mergeSort(left);
		printData("left after: ", left);
		printData("right: ", right);
		mergeSort(right);
		printData("right after: ", right);
		merge(left, right, data);
	}
	else
		insertionVect(data);
}

void	PmergeMe::merge(std::list<int> &left, 
	std::list<int> &right, std::list<int> &data) {

	std::cout << "\n----MERGE INSTERT---" << std::endl;
	printData("left final: ", left);
	printData("right final: ", right);
	printData("data before: ", data);


	size_t i = 0, l = 0, r = 0;
	while (l < left.size() && r < right.size()) {
		
		if (left[l] <= right[r]) {
			data[i] = left[l];
			l++;
		}
		else if (right[r] < left[l]) {
			data[i] = right[r];
			r++;
		}
		i++;
	}

	while (l < left.size()) 
		data[i++] = left[l++];
	
	while (r < right.size()) 
		data[i++] = right[r++];
	

	printData("data after: ", data);
	std::cout << "---------------------\n" << std::endl;


}
