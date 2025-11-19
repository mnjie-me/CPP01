/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:14:22 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/19 20:44:48 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class Zombie

{
	private:
	
		std::string name;
				
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void		announce(void);
		void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );