/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:08:12 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 10:21:11 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	int	i = -1;
	std::string tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl::pointer_function funct[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (++i  <  4)
	{
		if (tab_level[i] == level)
		{
			(this->*funct[i])();
			return ;
		}
	}	
	std::cout << "error: [" << level <<"] not recognized!" << std::endl;
}

void	Harl::debug(void)
{
	 std::cout << "[DEBUG] love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable ! I want to speak to the manager now." << std::endl;
}
