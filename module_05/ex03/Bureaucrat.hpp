/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:21 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 22:44:00 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

#define MINIGRADE 150
#define MAXGRADE 1

class Form;

class Bureaucrat {

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat & operator=(const Bureaucrat &rhs );
        ~Bureaucrat();

        const std::string &getName() const;
        int getGrade() const;
        void riseGrade();
        void deGrade();
		void signForm(Form &form); 

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

    private:
        const std::string _name;
        int _grade;
};

std::ostream &operator<<(std::ostream & os, const Bureaucrat &obj);

#endif //_BUREAUCRAT_HPP
