/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:33 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 22:49:27 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void parse_except(int grade) {
	if (grade > MINIGRADE)
		throw Form::GradeTooLowException();
	else if (grade < MAXGRADE)
		throw Form::GradeTooHighException();
}

Form::Form() : _name("FORM"), _target(), _sign(), _grade_sign(), _grade_exec() {
	
	std::cout << "Default Constructor [FORM] is Called" << std::endl;
}

Form::~Form() {

	std::cout << "Destructor [FORM] is Called" << std::endl;
}

Form::Form(const std::string &name, const std::string &target, int grade_sign, int grade_exec)
	: _name(name), _target(target), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
	
	parse_except(this->_grade_sign);
    parse_except(this->_grade_exec);
    std::cout << "Constructor [FORM] is Called" << std::endl;
}

Form::Form(const Form &src)
    : _name(src._name), _target(src._target), _sign(src._sign),
    _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){
	std::cout << "Copy Constructor [FORM] is called" << std::endl;
}

//accessors
const std::string &Form::getName() const {
    return _name;
}

const std::string &Form::getTarget() const {
    return _target;
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

	if (bureaucrat.getGrade() <= this->_grade_sign) {
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

void Form::execute(Bureaucrat const & executor) const {

    if (this->_sign) {
        if (executor.getGrade() > this->_grade_exec) {
            std::cout << executor.getName() << " can't execute "
            << this->_name << std::endl;
            throw Form::GradeTooLowException();
        }
        else {
            this->StartExecution();
            std::cout << executor.getName() << " executed "
            << this->_name << std::endl;
        }
    }
    else {
        throw Form::NotSigned();
    }
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException";
}

const char *Form::NotSigned::what() const throw() {
    return "Form::NotSigned, Bureaucrat can't execute any Form";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "name: " << form.getName() << ", target: " << form.getTarget()
    << ", sign: " << form.getSign() << ", grade_sign: " << form.getGradeSign()
       << ", _grade_exec: " << form.getGradeExec();
    return os;
}
