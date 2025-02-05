/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:53:30 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 11:15:41 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):name(name)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << this->name << " is born and armed with " << weapon.getType()<< std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}
