/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/18 11:38:19 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	/*
    Bureaucrat bureaucrat_shrubbery("JAY", 137);
    Bureaucrat bureaucrat_robot("X_Y", 45);
    Bureaucrat bureaucrat_president("TED", 5);
    ShrubberyCreationForm shr("WOOD");
    ShrubberyCreationForm cp_shrubbery(shr);
	RobotomyRequestForm robot("Cible_ROBOT");
	PresidentialPardonForm president("Cible_PRESIDENT");

    try {
        bureaucrat_shrubbery.signForm(cp_shrubbery);
        cp_shrubbery.execute(bureaucrat_shrubbery);
		bureaucrat_robot.signForm(robot);
		robot.execute(bureaucrat_robot);
		bureaucrat_president.signForm(president);
		president.execute(bureaucrat_president);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }*/

	Intern test;

	Form *form = test.makeForm("ROBOTOY", "CIBLE");
	if (form)
		std::cout << form->getName() << std::endl;
	return 0;
}
