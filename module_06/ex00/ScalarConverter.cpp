/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:22:24 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/18 11:02:14 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void) other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter & rhs) {
	(void) rhs;
	return *this;
}

static int handle_value(std::string &s) {

	std::string infini[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	bool f = false;
	int dot = 0;

	if (s.size() == 1 && !isdigit(s[0]))
		return CHAR;
	for (int i = 0; i < 6; i++)
		if (!s.compare(infini[i]))
			return INFINI_NAN;

	for (size_t i = 0; i < s.size(); i++) {
		if (i != 0 && i != s.size() - 1 
		&& !isdigit(s[i]) && s[i] != '.')
			return ERROR;
		else if (!isdigit(s[i]) && s[i] != '.' 
			&& ((i == 0 && s[i] != '-' && s[i] != '+') 
				|| (i == s.size() - 1 && s[i] != 'f'))) {
			return ERROR;
		}
		else if (s[i] == '.')
			dot++;
		else if (s[i] == 'f')
			f = true;
		else if (dot > 1 || (f && dot == 0))
			return ERROR;
	}
	if (f)
		return FLOAT;
	else if (dot)
		return DOUBLE;
	return INT;
}


int	ScalarConverter::convert(std::string &s) {

	std::string p_type[4] = {"char: ", "int: ", "float: ", "double: "};
	std::string c_val = "";
	int i_val = 0;
	float f_val = 0;
	double d_val = 0;
	int type = handle_value(s);

	if (type != ERROR) {
		if (type == CHAR) {
			c_val = s[0];
			i_val = static_cast<int>(s[0]);
			f_val = static_cast<float>(s[0]);
			d_val = static_cast<double>(s[0]);
		}
		else if (type == INT) {
			i_val = atoi(s.c_str());
			f_val = static_cast<float>(i_val); 
			d_val = static_cast<double>(i_val); 
		}
		else if (type == FLOAT) {
			f_val = atof(s.c_str());
			i_val = static_cast<int>(f_val);
			d_val = static_cast<double>(f_val);
		}	
		else if (type == DOUBLE) {
			d_val = strtod(s.c_str(), NULL);
			i_val = static_cast<int>(d_val);
			f_val = static_cast<float>(d_val);
		}
		else if (type == INFINI_NAN) {
				std::cout << p_type[0] << "impossible" << std::endl;
				std::cout << p_type[1] << "impossible" << std::endl;
				std::cout << p_type[2] << atof(s.c_str()) << 'f' << std::endl;
				std::cout << p_type[3] <<atof(s.c_str()) << std::endl;
				return 1;
		}
		if (c_val == "" && isprint(i_val))
			c_val += static_cast<char>(i_val);
		else if (c_val == "")
			c_val += "Non displayable";
		std::cout << p_type[0] << "'" << c_val << "'" << std::endl;
		std::cout << p_type[1] << i_val << std::endl;
		if (f_val - i_val == 0) {
			std::cout << p_type[2] << f_val << ".0f" << std::endl;
			std::cout << p_type[3] << d_val << ".0" << std::endl;
		}
		else {
			std::cout << p_type[2] << f_val << 'f' << std::endl;
			std::cout << p_type[3] << d_val << std::endl;
		}
		return 1;
	}
	std::cout << "Error: input invalid!" << std::endl;	
	return 0;
}
