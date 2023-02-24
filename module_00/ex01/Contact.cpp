/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:20 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/22 14:31:20 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {

	for (int i = 0; i < 5; i++) {
		
		_info[i] = "";
	}	
}

std::string	Contact::getInfo(int n) const {

	return _info[n]; //safe bet 
}

void	Contact::setContact() {
	
	std::string	argument[5] = {"First name: ", "Last name: ", "Nick name: ",\
	   "Phone number: ", "Darkest secret: "};
	for (int i = 0; i < 5; i++) {

		_info[i].clear();	
		std::cout << argument[i];
		while (_info[i].empty()) {

			if (!(std::getline(std::cin, _info[i]))) {
					std::cin.clear();
					std::cout << "exit" << std::endl;
					exit (0);
			}
			if (argument[i] == "Phone number: ")
				for (int j = 0; _info[i][j]; j++)
					if (std::isalpha(_info[i][j])) {
						
						std::cout << "Error: Format number must be in digit" << std::endl; 
						_info[i].clear();
						break ;
					}
		}
	}
}
