/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:35:36 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/22 12:11:55 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl says;
		says.complain(av[1]);
	}
	else
		std::cout << "Please introduce arguments" << std::endl;
	return (0);
}