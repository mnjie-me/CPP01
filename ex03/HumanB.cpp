/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:15:02 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 12:57:36 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& n) : name(n), weapon(NULL) 
{
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with their weapon " 
		<< weapon->getType() << std::endl;
	}
	else
		std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}