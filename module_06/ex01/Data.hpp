/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:30:39 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/21 11:08:41 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
#define _DATA_HPP_

class Data {

	public:
		Data();
		Data(int i);
		Data(const Data &other);
		Data & operator=( const Data & rhs );
		~Data();

		int	_i;
};

#endif
