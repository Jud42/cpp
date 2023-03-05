/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:36:14 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 18:39:32 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string var("HI THIS IS BRAIN");
	std::string *ptr = &var;
	std::string &ref = var;
	
	std::cout << "---------Print Memory Adress-----------" << std::endl;
	std::cout << &var << std::endl;
	//memory addr held by ptr	
	std::cout << ptr << std::endl;
	//memory addr held by ref
	std::cout << &ref << '\n' << std::endl;

	std::cout << "---------Print Value-----------" << std::endl;
	//value each var
	std::cout << var << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}
