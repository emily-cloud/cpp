/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:20:02 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 17:26:03 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}
FragTrap::FragTrap( std::string const& name)
{
	setName(name);
	std::cout << "FragTrap constructor is called, " << name << " is born!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "Hit Points: " << getFragHitPoints() << std::endl;
	std::cout << "Energy Points: " << getFragEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << getFragAttackDamage() << "\n" << std::endl;
}


FragTrap::FragTrap( FragTrap const& src ) : ClapTrap(src)
{
	std::cout << "FragTrap " << getFragName() << " is copied!" << std::endl;
	std::cout << "FragTrap " << getFragName() << " Hit Points: " << getFragHitPoints() << std::endl;
	std::cout << "FragTrap " << getFragName() << " Energy Points: " << getFragEnergyPoints() << std::endl;
	std::cout << "FragTrap " << getFragName() << " Attack Damage: " << getFragAttackDamage() << "\n" << std::endl;
}


FragTrap &FragTrap::operator=( FragTrap const& src )
{
	std::cout << "FragTrap " << getFragName() << "is assigned!" << std::endl;
	if ( this != &src )
	{
		setFragName(src.getFragName());
		setFragHitPoints(src.getFragHitPoints());
		setFragEnergyPoints(src.getFragEnergyPoints());
		setFragAttackDamage(src.getFragAttackDamage());
	}
	std::cout << "FragTrap " << getFragName() << " Hit Points: " << getFragHitPoints() << std::endl;
	std::cout << "FragTrap " << getFragName() << " Energy Points: " << getFragEnergyPoints() << std::endl;
	std::cout << "FragTrap " << getFragName() << " Attack Damage: " << getFragAttackDamage() << "\n" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getFragName() << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getFragName() << " high fives guys!" << "\n" << std::endl;
}

void	FragTrap::setFragName( std::string const& name )
{
	setName(name);
}

void	FragTrap::setFragHitPoints( unsigned int hitPoints )
{
	ClapTrap::setHitPoints(hitPoints);
}

void	FragTrap::setFragEnergyPoints( unsigned int energyPoints )
{
	setEnergyPoints(energyPoints);
}

void	FragTrap::setFragAttackDamage( unsigned int attackDamage )
{
	ClapTrap::setAttackDamage(attackDamage);
}

std::string	FragTrap::getFragName() const
{
	return this->getName();
}

unsigned int FragTrap::getFragHitPoints() const
{
	return getHitPoints();
}

unsigned int FragTrap::getFragEnergyPoints() const
{
	return getEnergyPoints();
}

unsigned int FragTrap::getFragAttackDamage() const
{
	return getAttackDamage();
}

