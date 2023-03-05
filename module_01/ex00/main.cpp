/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:53:56 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 17:56:09 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*new_z;

	//create a new zombie and return a pointer to it
	new_z = newZombie("new_zombie");
	
	//announce a zombie
	new_z->announce();

	//create and announce a zombie
	randomChump("random_zombie");

	//destructor zombie 
	delete new_z;
	return 0;
}
