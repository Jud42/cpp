/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 22:51:03 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat *bureaucrt = new Bureaucrat("SOLO", 5);
	Form *frm = new Form("TEST_FORM", 15, 0);

	try {
		bureaucrt->signForm(*frm);
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	delete frm;
	delete bureaucrt;
}
