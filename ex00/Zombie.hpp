/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:35:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/19 13:13:59 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie

{
	private:
	
		std::string name;
				
	public:

		Zombie(std::string name);
		~Zombie();

		void	announce(void);
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );


