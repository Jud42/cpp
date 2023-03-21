/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:25:19 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/20 23:27:15 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 2) {
		//code
		std::string s = static_cast<std::string>(argv[1]);
		if(!Convert::convertValue(s))
			return 127;
	}
	else
		std::cout << "Error: argument" << std::endl;
	return 0;
}
