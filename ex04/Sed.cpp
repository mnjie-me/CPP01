/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:38:30 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/21 13:52:58 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& file, const std::string& s1, const std::string& s2)
{
	this->file = file;
	this->s1 = s1;
	this->s2 = s2;	
}

Sed::~Sed() {}

void Sed::process()
{
	std::string		line;
	
	std::ifstream oldFile((file).c_str());
	if (!oldFile.is_open())
	{
		std::cout << "Could not opne the old file!" << std::endl;
		return ;
	}
	std::ofstream newFile((file + ".replace").c_str());
	if (!newFile.is_open())
	{
		std::cout << "Could not opne new file!" << std::endl;
		return ;
	}
	while (std::getline(oldFile, line))
	{
		std::string		new_line("");
		size_t i = 0;
		while (i < line.length())
		{
			size_t j = 0;
			while (j < s1.length() && i + j < line.length() && line[i + j] == s1[j])
				j++;
			if (j == s1.length())
			{
				new_line += s2;
				i += j;	
			}
			else
			{
				new_line += line[i];
				i++;
			}
		}
		newFile << new_line << std::endl;
	}
	oldFile.close();
	newFile.close();
}