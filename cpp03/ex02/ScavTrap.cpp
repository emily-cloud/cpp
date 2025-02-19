/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:46:59 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 11:29:00 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}
ScavTrap::ScavTrap( std::string const& name)
{
	setName(name);
	std::cout << "ScavTrap constructor is called, " << name << " is born!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "Hit Points: " << getHitPoints() << std::endl;
	std::cout << "Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << getAttackDamage() << "\n" << std::endl;
}


ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src)
{
	std::cout << "ScavTrap " << getName() << " is copied!" << std::endl;
	std::cout << "ScavTrap " << getName() << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "ScavTrap " << getName() << " Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "ScavTrap " << getName() << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
}


ScavTrap &ScavTrap::operator=( ScavTrap const& src )
{
	std::cout << "ScavTrap " << src.getName() << " is assigned!" << std::endl;
	if ( this != &src )
	{
		setName(src.getName());
		setHitPoints(src.getHitPoints());
		setEnergyPoints(src.getEnergyPoints());
		setAttackDamage(src.getAttackDamage());
	}
	std::cout << "ScavTrap " << getName() << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "ScavTrap " << getName() << " Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "ScavTrap " << getName() << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " is dead!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode!" << "\n" << std::endl;
}
