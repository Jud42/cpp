/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:39:42 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/13 17:14:59 by rmamison         ###   ########.fr       */
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

#define CLAP "\033[31m<CLAPTRAP> \033[0m"
#define SCAV "\033[33m<SCAVTRAP> \033[0m"

class ClapTrap {
public:

    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &src);
    ClapTrap & operator=(const ClapTrap &rhs);
    virtual ~ClapTrap();

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    std::string _name;
    unsigned int _Hit_points;
    unsigned int _Energy_points;
    unsigned int _Attack_damage;
};

#endif //EX00_CLAPTRAP_HPP
