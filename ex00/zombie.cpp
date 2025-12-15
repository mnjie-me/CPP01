/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnjie-me <mnjie-me@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:41:43 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/15 16:52:03 by mnjie-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string n) : name(n)
{
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."	<< std::endl;
}
