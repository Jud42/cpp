#include "PmergeMe.hpp"

void	printTime(std::string type, int size, double &time) {

	std::cout << "Time to process a range of " 
		<< size << " elements with std::" << type 
			<< ": " << time << " us" << std::endl;

}

double	getTime(clock_t &start, clock_t &end) {
	
	return static_cast<double>(end - start) / CLOCKS_PER_SEC * 10000;
}

int	main(int argc, char *argv[]) {
	
	if (argc == 1)
		return 0;

	clock_t start, end;
	double time_vect, time_deque;
	try {
	
		PmergeMe test(argv);
		printData("Before:\t", test.getDataVect());
		start = std::clock();
		test.mergeSort(test.getDataVect());
		end = std::clock();
		time_vect = getTime(start, end);
		start = std::clock();
		test.mergeSort(test.getDataDeque());
		end = std::clock();
		time_deque = getTime(start, end);
		//print time vect sort
		printData("After:\t", test.getDataVect());
		printTime("vector", (test.getDataVect()).size(), time_vect);
		printTime("deque", (test.getDataDeque()).size(), time_deque);

	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
