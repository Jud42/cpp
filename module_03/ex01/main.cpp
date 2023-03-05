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
