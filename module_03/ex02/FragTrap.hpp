/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:01:29 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 11:13:39 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &src);
    FragTrap & operator=(const FragTrap &rhs);
    ~FragTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};



#endif //EX01_SCAVTRAP_HPP
