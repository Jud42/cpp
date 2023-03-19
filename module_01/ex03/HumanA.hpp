/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:34:45 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:37:34 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_
 #define _HUMANA_

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name, Weapon &wp);
		void attack() const;

	private:
		std::string name;
		Weapon &weapon;
};

#endif
