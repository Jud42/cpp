/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:49:42 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:39:12 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const {return type;}

void Weapon::setType(std::string type) {this->type = type;}  

Weapon::~Weapon() {}
