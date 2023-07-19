#include "PmergeMe.hpp"

template<typename T>
void printData(std::string str, T &data) {
	
	typename T::iterator it;
	typename T::iterator it_end = data.end();

	std::cout << str;
	for (it = data.begin(); it != it_end; it++) {
		std::cout << *it;
		//if (it + 1 != data.end())
			std::cout << ' ';
	}
	std::cout << std::endl;
}

//explicit instanciation for usage from main
template void printData(std::string str, std::vector<int> &data);
template void printData(std::string str, std::deque<int> &data);



PmergeMe::PmergeMe(char** av) {
	
	++av;
	int tmp;
	for (int i = 0; av[i]; i++) {
		for (int j = 0; av[i][j]; j++) {
			if (!std::isdigit(av[i][j])) 
					throw std::invalid_argument("Error");
		}
		tmp = std::atoi(av[i]);
		_data_v.push_back(tmp);
		_data_d.push_back(tmp);
	}
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

std::vector<int> & PmergeMe::getDataVect(void) { return this->_data_v; }
std::deque<int> & PmergeMe::getDataDeque(void) { return this->_data_d; }

void	PmergeMe::insertion(std::deque<int> &data) {

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
}

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
}

void	PmergeMe::merge(std::deque<int> &left, 
	std::deque<int> &right, std::deque<int> &data) {

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
}


void	PmergeMe::merge(std::vector<int> &left, 
	std::vector<int> &right, std::vector<int> &data) {

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
}

void	PmergeMe::mergeSort(std::deque<int> &data) {

	std::deque<int> tmp;

	if (data.size() == 1)
		return ;
	if (data.size() > 5) {

		int	mid = data.size() / 2;
		std::deque<int> left(data.begin(), data.begin() + mid);
		std::deque<int> right(data.begin() + mid, data.end());
		mergeSort(left);
		mergeSort(right);
		merge(left, right, data);
	}
	else
		insertion(data);
}

void	PmergeMe::mergeSort(std::vector<int> &data) {

	if (data.size() == 1)
		return ;
	else if (data.size() > 5) {

		int	mid = data.size() / 2;
		std::vector<int> left(data.begin(), data.begin() + mid);
		std::vector<int> right(data.begin() + mid, data.end());
		mergeSort(left);
		mergeSort(right);
		merge(left, right, data);
	}
	else
		insertion(data);
}

