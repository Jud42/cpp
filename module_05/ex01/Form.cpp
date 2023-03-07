//
// Created by Raphael Mamison on 3/7/23.
//

#include "Form.hpp"

Form::Form() {}

Form::~Form() {

}

const std::string &Form::getName() const {
    return _name;
}

bool Form::isSign() const {
    return _sign;
}

int Form::getGradeSign() const {
    return _grade_sign;
}

int Form::getGradeExec() const {
    return _grade_exec;
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "_name: " << form.getName() << " _sign: " << form.isSign() << " _grade_sign: " << form.getGradeSign()
       << " _grade_exec: " << form.getGradeExec();
    return os;
}
