/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:38:30 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/12 12:57:28 by mari-cruz        ###   ########.fr       */
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
		std::cout << "Could not opne the new file!" << std::endl;
		return ;
	}
	if (s1.empty())
	{
		std::cout << "Nothing to change" << std::endl;
		return ;
	}
	while (std::getline(oldFile, line))
	{
		std::string new_line;
		size_t pos = 0;
		size_t found;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			new_line += line.substr(pos, found - pos);
			new_line += s2;
			pos = found + s1.length();
		}
		new_line += line.substr(pos);
		newFile << new_line << std::endl;
	}
	oldFile.close();
	newFile.close();
}