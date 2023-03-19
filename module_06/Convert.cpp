/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:22:24 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/19 16:16:06 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _ivalue(), _fvalue(), _dvalue() {}

Convert::~Convert() {}

Convert::Convert(std::string &s) {

	(void) s;
	(void) _ivalue;
	_fvalue = 0.0f / 0.0f;
	(void) _dvalue;
	std::cout << _fvalue << std::endl; 
	//check_value(s);

}

Convert::Convert(const Convert &other) {

	(void) other;
}

Convert &Convert::operator=(const Convert & rhs) {
	(void) rhs;
	return *this;
}

/*
void	Convert::check_value(std::string &s) {

	int digit = 0;
	int dot = 0;
	bool f = false;

	for (int i = 0; i < s.size(); i++) {
		if (!isdigiti(s[i]) && s[i] != '.' && s[i] != 'f')
			return ;
		else if (s[i] == '.') {
			if (i == )
		}
	}	
	if ((s[s.size() - 1]) == 'f')
		f = true;
	while (s.find(".") != std::string::npos)
		dot++;
}*/
