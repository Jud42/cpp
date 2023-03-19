/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:35:49 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 14:45:42 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP
#include <iostream>

#define MINIGRADE 150
#define MAXGRADE 1

class Bureaucrat {

public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat & operator=(const Bureaucrat &rhs );
    virtual ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;
    void riseGrade();
    void deGrade();

    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream & os, const Bureaucrat &obj);

#endif //_BUREAUCRAT_HPP
