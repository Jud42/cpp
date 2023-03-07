/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:40:13 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 11:40:23 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap a("A");
    ScavTrap b("B");
    FragTrap c("C");

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
    c.highFivesGuys();

    return 0;
}
