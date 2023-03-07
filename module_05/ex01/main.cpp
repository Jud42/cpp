#include <iostream>
#include "Bureaucrat.hpp"
int main() {

    Bureaucrat c ("C", 100);
    Bureaucrat d ("D", 2);
    Bureaucrat e ("E", 149);

    try {
        std::cout << "\n-------------------" << std::endl;
        //test simple
        std::cout << c << std::endl;
        std::cout << d << std::endl;
        std::cout << e << std::endl;

        //test riseGrade
        d.riseGrade();
        std::cout << d << std::endl;
        d.riseGrade();
        std::cout << d << std::endl;

        //test deGrade
        e.deGrade();
        std::cout << e << std::endl;
        e.deGrade();
        std::cout << "\n-------------------" << std::endl;
        std::cout << e << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}