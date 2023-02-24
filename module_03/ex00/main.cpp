#include <iostream>
#include "ClapTrap.hpp"
int main() {

    {
        ClapTrap a;
    }
    ClapTrap    b("jud");

    b.attack("Jim");
    b.takeDamage(5);
    b.takeDamage(5);
    b.beRepaired(5);
    return 0;
}
