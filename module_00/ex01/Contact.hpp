/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/20 17:22:43 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_
 # define _CONTACT_

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class	Contact {
	public:
		
		Contact();
		void setContact();
		std::string	getInfo(int n) const;
		~Contact() {}

	private:

		std::string _info[5];
};

#endif
