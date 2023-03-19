/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:15:34 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 16:23:34 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

class ClapTrap {
public:

    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &src);
    ClapTrap & operator=(const ClapTrap &inst);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string _name;
    unsigned int _Hit_points;
    unsigned int _Energy_points;
    unsigned int _Attack_damage;
};


#endif //EX00_CLAPTRAP_HPP
