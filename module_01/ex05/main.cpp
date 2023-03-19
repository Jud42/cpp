/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:08:08 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 10:17:45 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl test;

	test.complain("DEBRUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	return 0;
}
