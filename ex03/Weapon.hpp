/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:59:49 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 12:53:26 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon

{
	private:

		std::string type;

	public:

		Weapon(const std::string& t);
		~Weapon();
		const std::string& getType()const;
		void setType(const std::string& type);
};