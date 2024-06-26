/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:23:53 by rmamison          #+#    #+#             */
/*   Updated: 2023/02/24 17:24:19 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_
 # define _PHONEBOOK_

#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	public:

		PhoneBook();
		void	add_();
		void	search_() const;
		void	exit_();
		~PhoneBook();

	private:

		void print_contact(int i) const;

		Contact	_contact[8];
		int		_index;
};

#endif
