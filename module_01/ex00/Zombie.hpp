/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:53:21 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 17:56:11 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
 # define _ZOMBIE_

#include <iostream>

class	Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		void	announce(void) const;
		~Zombie();

	private:
		std::string	_name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);


#endif
