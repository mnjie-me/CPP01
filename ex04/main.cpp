/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:53:19 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/21 13:54:15 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char** av)
{
	if (ac == 4)
	{
		std::string file = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		
		Sed sed(file, s1,s2);
		sed.process();
	}
	else
		std::cout << "Wrong amount of arguments" << std::endl;
	return (0);
}