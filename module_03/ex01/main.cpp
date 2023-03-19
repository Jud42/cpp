/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:35:17 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 17:17:04 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
    ClapTrap a("A");
    ScavTrap b("B");

    a.attack("B");
    b.takeDamage(20);
    a.attack("B");
    b.takeDamage(20);
    a.attack("B");
    b.takeDamage(20);
    a.attack("B");
    b.takeDamage(20);
    a.attack("B");
    b.takeDamage(20);
    b.attack("A");
    b.beRepaired(100);
    b.attack("A");
	b.guardGate();

    return 0;
}
