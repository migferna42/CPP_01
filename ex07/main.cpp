/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 17:14:32 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 18:53:24 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <exception>

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;

	try
	{
		if (argc < 4 || argc > 4)
			throw std::string("Bad arguments");
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream ifs(filename);
		if (!ifs.is_open() || !ifs.good())
			throw std::string("Can't open file");
		std::ofstream ofs(filename + ".replace");
		if (!ofs.is_open() || !ofs.good())
			throw std::string("Can't create file");
		while (std::getline(ifs, line))
		{
			while (line.find(s1) != std::string::npos)
			{
				line.replace(line.find(s1), s1.length(), s2);
			}
			ofs << line << std::endl;
		}
	}
	catch(std::string error)
	{
		std::cerr << error << std::endl;
		//exit (EXIT_FAILURE);
	}
	return (0);
}
