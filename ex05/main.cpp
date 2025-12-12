/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:35:36 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/12 18:43:05 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harl;
		harl.complain(av[1]);
	}
	else
		std::cout << "Please introduce arguments" << std::endl;
	return (0);
}