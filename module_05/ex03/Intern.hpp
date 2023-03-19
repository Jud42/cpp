/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:38:32 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:36:50 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:
		Intern();
		Intern(const Intern &src);
		Intern & operator=( const Intern &other );
		~Intern();

		Form *makeForm(const std::string name, const std::string target);
		

	private:
		Form *_form[3];
};

#endif
