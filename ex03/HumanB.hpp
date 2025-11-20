/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:13:16 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 12:48:40 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB

{
	private:
	
		std::string name;
		Weapon* weapon;

	public:

		HumanB(const std::string& n);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
};