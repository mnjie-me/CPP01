/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:05:23 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/19 20:56:28 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name(""){}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."	<< std::endl;
}

void Zombie::setName(std::string n)
{
	name = n;
	std::cout << name << " created" << std::endl;
}