/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:00 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/19 11:02:04 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <list>
#include <iostream>
#include <algorithm>

template< typename T >
void easyfind(T data, int digit)
{
	typename T::iterator it = std::find(data.begin(), data.end(), digit);
	if (it == data.end())
		throw std::runtime_error("Error: Invalid value");
	std::cout << "easyfind: " << *it << std::endl;
}

#endif
