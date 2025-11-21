/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:38:42 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/21 13:44:50 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <fstream>
#include <iostream>

class Sed

{
	private:

		std::string	file;
		std::string	s1;
		std::string	s2;
	
	public:

		Sed(const std::string& file, const std::string& s1, const std::string& s2);
		~Sed();
		void process();
};

