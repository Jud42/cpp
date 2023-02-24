//
// Created by Raphael Mamison on 2/23/23.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>
#include <string>

// Color Text
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

#define SCLAP "\033[34m<SLAPTRAP> \033[0m"

class ClapTrap {
public:

    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &src);
    ClapTrap & operator=(const ClapTrap &rhs);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string _name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;
};

#endif //EX00_CLAPTRAP_HPP
