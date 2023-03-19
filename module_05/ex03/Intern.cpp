/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:38:34 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:39:04 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {


	for(int i = 0; i < 3; i++)
		_form[i] = nullptr; 
}

Intern::~Intern() {

	for(int i = 0; i < 3; i++)
		delete _form[i];
	std::cout << "Destructor [Intern] is called" << std::endl;
}

Form *Intern::makeForm(const std::string name, const std::string target) {
	
	_form[0] = new ShrubberyCreationForm(target); 
	_form[1] = new RobotomyRequestForm(target);
	_form[2] = new PresidentialPardonForm(target);

	for(int i = 0; i < 3; i++)
		if (!(_form[i]->getName()).compare(name))
			return this->_form[i];
	std::cout << " Form: " << name 
		<< " Doesn't exist!" << std::endl;
	return nullptr;
}

