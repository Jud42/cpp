/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:59:29 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 18:33:59 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*new_z;
	int	N = 3;

	//create a tab Zombie and return a pointer to the first zombie
	new_z = zombieHorde(N, "test");

	//destructor zombie 
	delete[] new_z;
	return 0;
}
