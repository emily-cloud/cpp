/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:27:14 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 16:05:45 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor called" << "\n" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 2;
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
	std::cout << "Hit Points: " << hitPoints << std::endl;
	std::cout << "Energy Points: " << energyPoints << std::endl;
	std::cout << "Attack Damage: " << attackDamage << "\n" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	*this = src;
	std::cout << "ClapTrap " << name << " is copied!" << std::endl;
	std::cout << "Hit Points: " << hitPoints << std::endl;
	std::cout << "Energy Points: " << energyPoints << std::endl;
	std::cout << "Attack Damage: " << attackDamage << "\n" << std::endl;
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
	std::cout << "ClapTrap " << name << " is being repaired!" << std::endl;
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left!" << std::endl;
	std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points!" << "\n" << std::endl;
	return;
}
