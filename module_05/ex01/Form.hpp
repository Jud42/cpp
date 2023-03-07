//
// Created by Raphael Mamison on 3/7/23.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <ostream>
#include "Bureaucrat.hpp"

class Form {

public:
    Form();

    virtual ~Form();

    const std::string &getName() const;

    bool isSign() const;

    int getGradeSign() const;

    int getGradeExec() const;

    void beSigned(const Bureaucrat &bureaucrat);
    void signForm() const;

    class GradeTooHighException : Bureaucrat::GradeTooHighException {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : Bureaucrat::GradeTooLowException {
        public:
            virtual const char *what() const throw();
    };

private:
    const std::string _name;
    bool _sign;
    int _grade_sign;
    int _grade_exec;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
