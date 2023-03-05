/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:49:50 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 20:40:46 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_
 # define _WEAPON_

#include <iostream>

class	Weapon
{
	public:

		Weapon();
		Weapon(std::string type); 
		const std::string& getType() const;
		void setType(std::string type);
		~Weapon();

	private:
		std::string type;
};

#endif
