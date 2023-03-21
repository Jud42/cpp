/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:30:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/21 11:08:31 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}
Data::Data(int i) : _i(i) {}
Data::Data(const Data &other) { (void)other; }
Data & Data::operator=( const Data & rhs ) { (void)rhs; return *this; }
Data::~Data() {}
