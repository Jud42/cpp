/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:23:33 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/22 14:26:29 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add_() {

	if (_index > 7) {

		for (int i = 0; i < 7; i++)
			_contact[i] = _contact[i + 1];
		_contact[_index - 1].setContact();
	}
	else {

		_contact[_index].setContact();
		_index++;
	}
}
		
void	PhoneBook::print_contact(int i) const {
	
	const int	raw_w = 10;
	std::cout << std::setw(raw_w) << std::right << "Index" << "|"
        << std::setw(raw_w) << std::right << "First Name" << "|"
        << std::setw(raw_w) << std::right << "Last Name" << "|"
        << std::setw(raw_w) << std::right << "Nick Name" << std::endl;

	std::cout << std::setw(raw_w) << std::setiosflags(std::ios::fixed) 
	<< std::setprecision(0) << std::setiosflags(std::ios::right) << i + 1 << "|";
	for (int j = 0; j < 3; j++) {

	std::string tmp = _contact[i].getInfo(j);
        std::cout << std::setw(raw_w) << std::right 
	<< (tmp.length() > raw_w ? tmp.substr(0, raw_w - 1) + "." : tmp) << "|";
	}
	std::cout << std::endl;

}

void	PhoneBook::search_() const {
	
	std::string input;

	if (!_index) {
		std::cout << "Empty contact" << std::endl;
		return ;
	}
	for (int i = 0; i < _index; i++)
		print_contact(i);

	std::cout << "Index contact: ";
	if (!(std::cin >> input)) {
		std::cout << "exit" << std::endl;
		exit (0);
	}

	if (std::isdigit(input[0])) {
		
		int	digit = std::stoi(input);
		if (digit > _index || digit < 1) 	
			std::cout << "Error: Index non valid" << std::endl; 
		else 
			for (int j = 0; j < 5; j++)
				std::cout << _contact[digit - 1].getInfo(j) << std::endl;
	} 
	else
		std::cout << "Error: Index non valid" << std::endl;
}

void	PhoneBook::exit_() { exit(0); }
