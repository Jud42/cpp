#include "PmergeMe.hpp"

int	main(int argc, char *argv[]) {
	
	if (argc == 1)
		return 0;
	try {
	
		PmergeMe test(argc, argv);
		test.printData("Before: ", test._data_vect);
		std::cout << "---------------" << std::endl;
		test.mergeSortVect(test._data_vect);
		//test.mergeSortList();
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
