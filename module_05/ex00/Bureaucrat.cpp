//
// Created by Raphael Mamison on 3/5/23.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(), _grade() {
    std::cout << "Default Constructor is called!" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor is called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
    : _name(src._name), _grade(src._grade) {
    std::cout << "Copy constructor is called!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_grade = rhs._grade;
    }
    return *this;
}

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

