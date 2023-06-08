<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:00 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/28 10:34:49 by rmamison         ###   ########.fr       */
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
	int *it1 = std::find(data.begin(), 
	data.end(), digit);
	if (it1 != data.end())
		std::cout << "FIND: " << *it1 << std::endl;
}

#endif
