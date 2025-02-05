/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:59:00 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 11:15:18 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name):name(name), weapon(NULL)
{
	this->name = name;
	std::cout << this->name << " is born without weapon" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	std::cout << this->name << " is now armed with a " << weapon.getType() << std::endl;
}
