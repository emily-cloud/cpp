/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:36:32 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 17:53:36 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
	std::cout << "Harl is here" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is gone" << std::endl;
}
void Harl::complain(std::string level)
{
	int startindex = -1;
	void (Harl::*funcs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			startindex = i;
			break;
		}
	}

	for(int i = startindex; i < 4; i++)
	{
		switch (i)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				(this->*funcs[0])();
				std::cout << std::endl;
				break;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				(this->*funcs[1])();
				std::cout << std::endl;
				break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				(this->*funcs[2])();
				std::cout << std::endl;
				break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				(this->*funcs[3])();
				std::cout << std::endl;
				break;
			default:
			break;
		}
	}
}


void Harl::debug(void)
{
	std::cout << "I love having extra bacon for mY 7XL-double-cheese-triple-" << std::endl;
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout <<  "I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
