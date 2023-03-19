/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:14:53 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/17 09:50:59 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iomanip>
#include <fstream>

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor [PRESIDENT] is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    :   Form("PRESIDENT", target, 25, 5) {
    std::cout << "Constructor [PRESIDENT] is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {
    std::cout << "Copy Constructor [PRESIDENT] is called" << std::endl;
}

void PresidentialPardonForm::StartExecution() const {
	std::cout << this->getTarget()
		<< " was forgiven by Zaphod Beeblebrox" << std::endl;
}
