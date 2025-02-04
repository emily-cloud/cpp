/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:53:30 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 16:46:24 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA():
// {
// }

HumanA::HumanA(std::string name, Weapon& weapon):name(name), weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
	std::cout << this->name << " is born" << std::endl;
	std::cout << this->name << " has a " << this->weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
