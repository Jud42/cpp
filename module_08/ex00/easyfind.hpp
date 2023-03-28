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

#include <algorithm>
#include <iostream>

template< typename T >
void easyfind(T &data, int digit) {

	typename T::iterator it = std::find(data.begin(), data.end(), digit);

	if (it == data.end())
		throw std::exception();
	else
		std::cout << *it << std::endl;
}

#endif
