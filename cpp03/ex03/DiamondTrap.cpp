/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:33:02 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 14:09:29 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), name("DiamondTrap")
{
	ClapTrap::setName(name + "_clap_name");
    std::cout << "[NEW] DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
    ScavTrap(name),
    FragTrap(name)
{
	ClapTrap::setName(name + "_clap_name");
	this->name = name;
	setHitPoints(FragTrap::hitPoints);
	setEnergyPoints(ScavTrap::energyPoints);
	setAttackDamage(FragTrap::attackDamage);
    std::cout << "DiamondTrap " << name << " constructed"  << std::endl;
	std::cout << "DiamondTrap " << name << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Energy Points: " << getEnergyPoints()<< std::endl;
	std::cout << "DiamondTrap " << name << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) :
    ClapTrap(src),
    ScavTrap(src),
    FragTrap(src)
{
    *this = src;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		name = src.name;
		setHitPoints(src.getHitPoints());
		setEnergyPoints(src.getEnergyPoints());
		setAttackDamage(src.getAttackDamage());
	}
	std::cout << "DiamondTrap " << name << " assigned" << std::endl;
	std::cout << "DiamondTrap " << name << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Energy Points: " << getEnergyPoints()<< std::endl;
	std::cout << "DiamondTrap " << name << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap : " << name << std::endl;
    std::cout << "my ClapTrap name : " << ClapTrap::getName() << std::endl;
}
