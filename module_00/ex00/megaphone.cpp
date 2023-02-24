/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:21:34 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/22 16:15:12 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	std::string str;

	if (argc != 1) {
		
		for (int i = 1; i < argc; i++) {
			str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
				str[j] = std::toupper(str[j]);
			std::cout << str << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
