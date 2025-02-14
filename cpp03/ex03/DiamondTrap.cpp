/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:33:02 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 18:45:17 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap( std::string const& name):ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	std::cout << "-------------------------------- "<< std::endl;
	std::cout << "fraghitpoints: " <<  getFragHitPoints() << std::endl;
	std::cout << "scavenergy: " << getScavEnergyPoints() << std::endl;
	std::cout << "fragattack: " << getFragAttackDamage() << std::endl;
	std::cout << "-------------------------------- "<< std::endl;
	setDiamondHitPoints(getFragHitPoints());
	setDiamondEnergyPoints(getScavEnergyPoints());
	setDiamondAttackDamage(getFragAttackDamage());
	std::cout << "DiamondTrap " << name << " is born!" << std::endl;
	std::cout << "Hit Points: " << getDiamondHitPoints() << std::endl;
	std::cout << "Energy Points: " << getDiamondEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << getDiamondAttackDamage()<< "\n" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const& src ):ClapTrap(src),ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap " << name << " is copied!" << std::endl;
	std::cout << "DiamondTrap " << name << " Hit Points: " << getDiamondHitPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Energy Points: " << getDiamondEnergyPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Attack Damage: " << getDiamondAttackDamage() << "\n" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is dead!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const& src )
{
	if ( this != &src )
	{
		name = src.name;
		setDiamondHitPoints(src.getDiamondHitPoints());
		setDiamondEnergyPoints(src.getDiamondEnergyPoints());
		setDiamondAttackDamage(src.getDiamondAttackDamage());
	}
	std::cout << "DiamondTrap " << name << " is assigned!" << std::endl;
	std::cout << "DiamondTrap " << name << " Hit Points: " << getDiamondHitPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Energy Points: " << getDiamondEnergyPoints() << std::endl;
	std::cout << "DiamondTrap " << name << " Attack Damage: " << getDiamondAttackDamage() << "\n" << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << name << std::endl;
	std::cout << "ClapTrap name: " << getName() << std::endl;
	std::cout << "ScavTrap name: " << getScavName() << std::endl;
	std::cout << "FragTrap name: " << getFragName() << "\n" << std::endl;
}

void DiamondTrap::attack( const std::string& target )
{
	if( getDiamondEnergyPoints() <= 0 || getDiamondHitPoints() <= 0 )
	{
		std::cout << "DiamondTrap " << name << " is dead!" << std::endl;
		return ;
	}
	ScavTrap::attack(target);
}

void	DiamondTrap::setDiamondName( std::string const& name )
{
	this->name = name;
}

void	DiamondTrap::setDiamondHitPoints( unsigned int hitPoints )
{
	this->hitPoints = hitPoints;
}

void	DiamondTrap::setDiamondEnergyPoints( unsigned int energyPoints )
{
	this->energyPoints = energyPoints;
}

void	DiamondTrap::setDiamondAttackDamage( unsigned int attackDamage )
{
	this->attackDamage = attackDamage;
}

std::string	DiamondTrap::getDiamondName() const
{
	return this->name;
}

unsigned int DiamondTrap::getDiamondHitPoints() const
{
	return this->hitPoints;
}

unsigned int	DiamondTrap::getDiamondEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int	DiamondTrap::getDiamondAttackDamage() const
{
	return this->attackDamage;
}
