#include "PmergeMe.hpp"

void	printTime(std::string type, int size, double &time) {

	std::cout << "Time to process a range of " 
		<< size << " elements with std::" << type 
			<< ": " << std::setprecision(5) << time << " us" << std::endl;

}

double	getTime(struct timeval &start, struct timeval &end) {
	
	//long sec = end.tv_sec - start.tv_sec;
	long micros = end.tv_usec - start.tv_usec;
	return static_cast<double>(micros);// * 1000000.0 + static_cast<double>(micros);
}

int	main(int argc, char *argv[]) {
	
	if (argc == 1)
		return 0;

	struct timeval start, end;
	double time_v, time_d;
	try {
	
		PmergeMe test(argv);
		printData("Before:\t", test.getDataVect());
		gettimeofday(&start, NULL);
		test.mergeSort(test.getDataVect());
		gettimeofday(&end, NULL);
		time_v = getTime(start, end);
		gettimeofday(&start, NULL);
		test.mergeSort(test.getDataDeque());
		gettimeofday(&end, NULL);
		time_d = getTime(start, end);
		//print time vect sort
		printData("After:\t", test.getDataVect());
		printTime("vector", (test.getDataVect()).size(), time_v);
		printTime("deque", (test.getDataDeque()).size(), time_d);

	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
