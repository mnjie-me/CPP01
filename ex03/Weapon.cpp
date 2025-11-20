/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:54:32 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 11:55:56 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& t) : type(t)
{
	std::cout << t << " created" << std::endl;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType()const
{
	return (type);
}

void Weapon::setType(const std::string& value)
{
	type = value;
}