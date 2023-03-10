/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:45 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/10 16:07:05 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <ostream>
#include "Bureaucrat.hpp"

class Form {

    public:
        //canonical
		Form();
		Form(const std::string &name, int &grade_sign, int &grade_exec)
		Form(const Form &src);
		Form operator=( const Form &rhs );
        virtual ~Form();
		
		//accessors
        const std::string &getName() const;
        bool getSign() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(const Bureaucrat &bureaucrat);

		//exceptions redefinition
    	class GradeTooHighException : std::exception {
        	public:
            	virtual const char *what() const throw();
    	};
    	class GradeTooLowException : std::exception {
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
