/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnjie-me <mnjie-me@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:35:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/15 16:51:49 by mnjie-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie

{
	private:
	
		std::string name;
				
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );


