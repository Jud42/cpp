/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:28:32 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/24 17:24:35 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	PhoneBook	p;
	std::string	input;

	std::cout << "Enter one of these commands: 1.ADD 2.SEARCH 3.EXIT";
	std::cout << std::endl;
	while (1)
	{
		std::cin >> input;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cout << "exit" << std::endl;
			exit (0);
		}
		if (input == "ADD") p.add_();
		else if (input == "SEARCH") p.search_();
		else if (input == "EXIT") p.exit_();
		else
			std::cout << "Error: command not recongnized" << std::endl;
		std::cout << "(ADD) (SEARCH) (EXIT)" << std::endl;
	}
	return 0;
}
