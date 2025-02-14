/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:46:59 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 18:47:47 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
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
	std::cout << "Hit Points: " << getScavHitPoints() << std::endl;
	std::cout << "Energy Points: " << getScavEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << getScavAttackDamage()  << std::endl;
}


ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src)
{
	std::cout << "ScavTrap " << getScavName() << " is copied!" << std::endl;
	std::cout << "ScavTrap " << getScavName() << " Hit Points: " << getScavHitPoints() << std::endl;
	std::cout << "ScavTrap " << getScavName() << " Energy Points: " << getScavEnergyPoints() << std::endl;
	std::cout << "ScavTrap " << getScavName() << " Attack Damage: " << getScavAttackDamage() << "\n" << std::endl;
}


ScavTrap &ScavTrap::operator=( ScavTrap const& src )
{
	std::cout << "ScavTrap " << getScavName() << "is assigned!" << std::endl;
	if ( this != &src )
	{
		setScavName(src.getScavName());
		setScavHitPoints(src.getScavHitPoints());
		setScavEnergyPoints(src.getScavEnergyPoints());
		setScavAttackDamage(src.getScavAttackDamage());
	}
	std::cout << "ScavTrap " << getScavName() << " Hit Points: " << getScavHitPoints() << std::endl;
	std::cout << "ScavTrap " << getScavName() << " Energy Points: " << getScavEnergyPoints() << std::endl;
	std::cout << "ScavTrap " << getScavName() << " Attack Damage: " << getScavAttackDamage() << "\n" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getScavName() << " is dead!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getScavName() << " has entered in Gate keeper mode!" << "\n" << std::endl;
}


void	ScavTrap::setScavName( std::string const& name )
{
	setName(name);
}

void	ScavTrap::setScavHitPoints( unsigned int hitPoints )
{
	setHitPoints(hitPoints);
}

void	ScavTrap::setScavEnergyPoints( unsigned int energyPoints )
{
	setEnergyPoints(energyPoints);
}

void	ScavTrap::setScavAttackDamage( unsigned int attackDamage )
{
	ClapTrap::setAttackDamage(attackDamage);
}

std::string	ScavTrap::getScavName() const
{
	return this->getName();
}

unsigned int ScavTrap::getScavHitPoints() const
{
	return getHitPoints();
}

unsigned int ScavTrap::getScavEnergyPoints() const
{
	return getEnergyPoints();
}

unsigned int ScavTrap::getScavAttackDamage() const
{
	return getAttackDamage();
}
