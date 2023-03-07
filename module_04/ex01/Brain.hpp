/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:15:25 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 21:58:16 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
 # define _BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
public:

    Brain();
    Brain(const Brain &src);
    Brain & operator=( const Brain &rhs );
    ~Brain();


	private:
		std::string _ideas[100];
};

#endif //MODULE_04_ANIMAL_HPP
