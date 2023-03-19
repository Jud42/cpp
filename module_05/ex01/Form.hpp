/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:45 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/16 18:49:23 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:
        //canonical 
		//operator assignment missing cause attributs private & 
		//the only solution is to use std::swap but we can't use <algorithm> header
		Form();
		Form(const std::string &name, int grade_sign, int grade_exec);
		Form(const Form &src);
        virtual ~Form();
		
		//accessors
        const std::string &getName() const;
        bool getSign() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(const Bureaucrat &bureaucrat);

		//exceptions redefinition
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
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
