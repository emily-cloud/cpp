/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:27:14 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 12:46:07 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 2;
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
	std::cout << "ClapTrap " << name << " Hit Points: " << hitPoints << std::endl;
	std::cout << "ClapTrap " << name  << " Energy Points: " << energyPoints << std::endl;
	std::cout << "ClapTrap " << name << " Attack Damage: " << attackDamage << "\n" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src )
	: name(src.name), hitPoints(src.hitPoints), energyPoints(src.energyPoints), attackDamage(src.attackDamage)
{
	std::cout << "ClapTrap " << name << " is copied!" << std::endl;
	std::cout << "ClapTrap " << name << " Hit Points: " << hitPoints << std::endl;
	std::cout << "ClapTrap " << name << " Energy Points: " << energyPoints << std::endl;
	std::cout << "ClapTrap " << name << " Attack Damage: " << attackDamage << "\n" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << name << " is dead!" << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &src )
{
	if( this != &src )
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "ClapTrap " << name << " is assigned!" << std::endl;
	std::cout << "ClapTrap " << name << " Hit Points: " << hitPoints << std::endl;
	std::cout << "ClapTrap " << name << " Energy Points: " << energyPoints << std::endl;
	std::cout << "ClapTrap " << name << " Attack Damage: " << attackDamage << "\n" << std::endl;
	return *this;
}

void ClapTrap::attack( const std::string& target )
{
	if( hitPoints <= 0 || energyPoints <= 0 )
	{
		std::cout << "ClapTrap " << name << " is dead!" << "\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left!" << std::endl;
	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points left!" << "\n" << std::endl;
	return;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if( hitPoints <= 0  || energyPoints <= 0 )
	{
		std::cout << "ClapTrap " << name << " is dead!" << "\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	if(amount > hitPoints)
	{
		amount = hitPoints;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left!" <<  std::endl;
	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points left!"  << "\n" << std::endl;
	return;
}
void ClapTrap::beRepaired( unsigned int amount )
{
	if(energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << "\n" << std::endl;
		return ;
	}
	if(hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead!, No need to repaired!" << "\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " is being repaired with amount: " << amount << std::endl;
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left!" << std::endl;
	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points!" << "\n" << std::endl;
	return;
}

void ClapTrap::setName( std::string const& name )
{
	this->name = name;
}

void ClapTrap::setHitPoints( unsigned int hitPoints )
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints( unsigned int energyPoints )
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage( unsigned int attackDamage )
{
	this->attackDamage = attackDamage;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}
