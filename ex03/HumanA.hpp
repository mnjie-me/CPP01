/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:10:06 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 12:48:10 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA

{
	private:
	
		std::string name;
		Weapon& weapon;

	public:

		HumanA(const std::string& n, Weapon& w);
		~HumanA();
		void attack();
};