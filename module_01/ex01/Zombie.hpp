/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:53:21 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 18:31:18 by rmamison         ###   ########.fr       */
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
		void	setter(std::string n);
		~Zombie();

	private:
		std::string	_name;
};

Zombie *zombieHorde(int N, std::string name);


#endif
