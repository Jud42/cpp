/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:09 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 20:59:56 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void parse_exception(int grade) {
    if (grade > MINIGRADE)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    parse_exception(_grade);
    std::cout << "Constructor is called! [BUREAUCRAT " << _name
    << " is created]" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor is called! [BUREAUCRAT " << _name
    << " is destroyed]" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
    : _name(src._name), _grade(src._grade) {
    std::cout << "Copy constructor is called!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs ) {
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::riseGrade() {
    parse_exception(_grade - 1);
    --_grade;
    std::cout << _name << ": I'v just went up [1] grade" << std::endl;
}

void Bureaucrat::deGrade() {
    parse_exception(_grade + 1);
    ++_grade;
    std::cout << _name << ": I'v  just lost [1] grade" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Exception: Too High Grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Exception: Too Low Grade";
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
