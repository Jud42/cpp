//
// Created by Raphael Mamison on 3/5/23.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(), _grade() {
    std::cout << "Default Constructor is called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    std::cout << "Constructor is called!" << std::endl;
    try {
        if (!_name.empty() && this->_grade >= 1 && this->_grade <= 150)
            std::cout << "Welcome " << _name << std::endl;
        else
            throw (std::exception());
    }
    catch (std::exception &e) {
        if (_grade > 150)
            std::cout << "Error: Bureaucrat::GradeTooLowException" << std::endl;
        else
            std::cout << "Error: Bureaucrat::GradeTooHighException" << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor is called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
    : _name(src._name), _grade(src._grade) {
    std::cout << "Copy constructor is called!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs ) {
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

void Bureaucrat::riseGrade() {

    try {
        if (_grade > 1) {
            _grade--;
            std::cout << "Felicitation [" << _name
            << "] pour votre nouvelle grade: " << _grade << std::endl;
        }
        else
            throw (std::exception());
    }
    catch (std::exception &e) {
            std::cout << "Error: Bureaucrat::GradeTooHighException" << std::endl;
    }
}

void Bureaucrat::deGrade() {
    try {
        if (_grade < 150) {
            _grade++;
            std::cout << "Je suis navrer [" << _name
            << "] vous venez d'être dégrader: " << _grade << std::endl;
        }
        else
            throw (std::exception());
    }
    catch (std::exception &e) {
        std::cout << "Error: Bureaucrat::GradeTooLowException" << std::endl;
    }
}

//to do
// override operator (<<) to print bureaucrat name and his grade