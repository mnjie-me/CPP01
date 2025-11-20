/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:48:30 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/20 09:53:51 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* ptr = &brain;
	std::string& ref = brain;

	std::cout << &brain << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << brain << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;	
}