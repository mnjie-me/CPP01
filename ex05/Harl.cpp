/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:43:51 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/12 13:28:34 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon."
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    int i = 0;
    while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
		(this->*functions[i])();
	else
		std::cout << "Command not found" << std::endl;
}