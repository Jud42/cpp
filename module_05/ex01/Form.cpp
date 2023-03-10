/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:33 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 17:05:56 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void parse_exception

Form::Form() : _name(), _sign(), _grade_sign(), _grade_exec() {
	
	std::cout << "Constructor [FORM] is Called" << std::endl;
}

Form::~Form() {

	std::cout << "Destructor [FORM] is Called" << std::endl;
}

Form::Form(const std::string &name, int &grade_sign, int &grade_exec) 
	: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	std::cout << "Constructor Copy [FORM] is Called" << std::endl;
}

Form::Form(const Form &src) {

	*this = src;
}

Form &Form::operator=( const Form &rhs ) {
	
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_sign = rhs._sign;
		this->_grade_sign = rhs._grade_sign;
		this->_grade_exec = rhs._grade_exec;
	}
	return *this;
}

//accessors
const std::string &Form::getName() const {
    return _name;
}

bool Form::getSign() const {
    return _sign;
}

int Form::getGradeSign() const {
    return _grade_sign;
}

int Form::getGradeExec() const {
    return _grade_exec;
}

//
void beSigned(const Bureaucrat &bureaucrat) {

	//elle doit changer le status du formulaire en signer si le baccalau
	//echelon est suffisant
	if (bureaucrat.getGrade() <= _grade_sign) {
		_sign = True;
		std::cout << bureaucrat.getName() << " signed "
			<< this->_name << std::endl;
	}
	else {
		std::cout << bureaucrat.getName() <<  " couldn’t sign " <<
			this->_name << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException"
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException"
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "_name: " << form.getName() << " _sign: " << form.isSign() << " _grade_sign: " << form.getGradeSign()
       << " _grade_exec: " << form.getGradeExec();
    return os;
}
