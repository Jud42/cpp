/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:42:30 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 19:42:33 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &src);
    ScavTrap & operator=(const ScavTrap &rhs);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif //EX01_SCAVTRAP_HPP
