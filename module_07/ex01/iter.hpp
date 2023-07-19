/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:42:42 by rmamison          #+#    #+#             */
/*   Updated: 2023/07/18 15:19:13 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>

template < typename T>
void printContent(T & a)
{
	std::cout << "contenu: " << a << std::endl;
}

//Tfunc will be a pointer to function
template < typename T1 , typename Tfunc >
void iter(T1 *array, int size, Tfunc funct)
{
	for (int i = 0; i < size; i++)
		funct(array[i]);
}


#endif
