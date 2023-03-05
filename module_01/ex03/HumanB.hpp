/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:34:37 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:40:43 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_
 #define _HUMANB_

#include "Weapon.hpp"

class HumanB
{
	public:
		
		HumanB(std::string name);
		HumanB(std::string name, const Weapon &wp);

		//setters
		void setWeapon(const Weapon &wp);
		//getters
		void attack() const;

	private:
		std::string name;
		const Weapon *weapon;
};

#endif
