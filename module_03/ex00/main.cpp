/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:15:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/09 18:12:54 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {

    {
        ClapTrap a;
    }
    ClapTrap    jud("JUD");
	ClapTrap	jim("JIM");

    jud.attack("Jim");
    jim.takeDamage(5);
    jud.attack("Jim");
    jim.takeDamage(5);
    jim.attack("JUD");
    jud.attack("Jim");
    jim.beRepaired(5);


    return 0;
}
