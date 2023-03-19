/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:33:42 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 18:33:48 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*ptr_zomb = new Zombie[N];

	for (int i = 0; i < N; i++)
		ptr_zomb[i].setter(name);

	return (ptr_zomb);
}
