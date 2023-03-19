/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:47:30 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/03 21:17:10 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "error: Argument" << std::endl;
		return 1;
	}
	
	std::ifstream file(argv[1]);	
	if (file.is_open())
	{
		std::string namefile(argv[1]);	
		std::ofstream	outfile(namefile + ".replace");
		if (outfile.is_open())
		{
			std::string	line;
			int	i(0);
			while (std::getline(file, line))
			{
				outfile << is_occurence_replace(line, argv[2], argv[3]) << std::endl;
				i++;
			}
			outfile.close();
			file.close();
			if (i == 0) {
				std::cerr << "error: empty file" << std::endl;
				return 1;
			}
			return 0;
		}
		file.close();
	}
	std::cerr << "error: file not found" << std::endl;
	return 1;
}
