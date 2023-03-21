/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:30:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/20 23:36:28 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_HPP_
#define _CONVERT_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cmath>

#define ERROR 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define INFINI_NAN 5


class Convert {

	private:
		Convert();
		Convert(const Convert &other);
		Convert & operator=( const Convert & rhs );
		~Convert();

	public:
		static int convertValue(std::string &s);
	

};

#endif
