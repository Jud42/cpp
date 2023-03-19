/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:14:53 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/17 09:32:10 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <iomanip>
#include <fstream>

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor [ROBOTOMY] is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    :   Form("ROBOTOMY", target, 72, 45) {
    std::cout << "Constructor [ROBOTOMY] is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {
    std::cout << "Copy Constructor [ROBOTOMY] is called" << std::endl;
}

void RobotomyRequestForm::StartExecution() const {
	std::cout << this->getTarget()
		<< " has been robotomized successfully 50\% of the time" << std::endl;
}
