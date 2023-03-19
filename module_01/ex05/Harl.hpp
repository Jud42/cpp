/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:08:14 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 10:34:36 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_
 # define _HARL_

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		void complain(std::string level);
		typedef void (Harl::*pointer_function)(void);
		~Harl();


	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
		

#endif
