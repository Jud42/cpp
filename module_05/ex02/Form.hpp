/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:45 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 22:42:43 by rmamison         ###   ########.fr       */
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
		Form();
		Form(const std::string &name, const std::string &target, int grade_sign, int grade_exec);
		Form(const Form &src);
        virtual ~Form();


        void execute(Bureaucrat const & executor) const;
        virtual void StartExecution() const = 0;


    //accessors
        const std::string &getName() const;
        const std::string &getTarget() const;
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
        class NotSigned : public std::exception {
            public:
                const char *what() const throw();
        };

    private:
        const std::string _name;
        const std::string _target;
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
