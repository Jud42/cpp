/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:30:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/19 16:07:17 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_HPP_
#define _CONVERT_HPP_

#include <iostream>
#include <string>
#include <cstring>

class Convert {

	public:
		//constr
		Convert();
		Convert(std::string &s);
		Convert(const Convert &other);
		Convert & operator=( const Convert & rhs );
		~Convert();

	private:
		int _ivalue;
		float _fvalue;
		double _dvalue;

		//void check_value(std::string &s);
};

#endif
