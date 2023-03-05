//
// Created by Raphael Mamison on 3/5/23.
//

#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &src)
    Bureaucrat & operator=( const Bureaucrat &rhs )
    virtual ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

private:
    const std::string _name;
    int _grade;
};


#endif //_BUREAUCRAT_HPP
