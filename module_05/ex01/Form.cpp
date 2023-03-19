/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:33 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/16 18:46:51 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void parse_except(int grade) {
	if (grade > MINIGRADE)
		throw Form::GradeTooLowException();
	else if (grade < MAXGRADE)
		throw Form::GradeTooHighException();
}

Form::Form() : _name(), _sign(), _grade_sign(), _grade_exec() {
	
	std::cout << "Default Constructor [FORM] is Called" << std::endl;
}

Form::~Form() {

	std::cout << "Destructor [FORM] is Called" << std::endl;
}

Form::Form(const std::string &name, int grade_sign, int grade_exec) 
	: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec) {
	
	parse_except(this->_grade_sign);
	parse_except(this->_grade_exec);
	std::cout << "Constructor [FORM] is Called" << std::endl;
}

Form::Form(const Form &src) 
	: _name(src._name), _sign(src._sign), 
	_grade_sign(src._grade_sign), _grade_exec(src._grade_exec)
{}

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
void Form::beSigned(const Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() <= _grade_sign) {
		this->_sign = true;
		std::cout << bureaucrat.getName() << " signed "
			<< this->_name << std::endl;
	}
	else {
		std::cout << bureaucrat.getName() <<  " couldn’t sign " <<
			this->_name << std::endl;
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException";
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "_name: " << form.getName() << " _sign: " << form.getSign() << " _grade_sign: " << form.getGradeSign()
       << " _grade_exec: " << form.getGradeExec();
    return os;
}
