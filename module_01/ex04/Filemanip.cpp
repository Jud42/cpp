/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filemanip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:41:43 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 10:04:21 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	is_occurence_replace(std::string line, std::string s1, std::string s2)
{	
	size_t pos = line.find(s1, 0);
	// npos = valeur max size_t, renvoyer quand aucune occurence est trouver
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1, 0);
	}
	return line;
}
