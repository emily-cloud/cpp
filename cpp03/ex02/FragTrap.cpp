/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:20:02 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 11:38:39 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	std::cout << "FragTrap " << getName() << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
}


FragTrap::FragTrap( FragTrap const& src ) : ClapTrap(src)
{
	std::cout << "FragTrap " << getName() << " is copied!" << std::endl;
	std::cout << "FragTrap " << getName() << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
}


FragTrap &FragTrap::operator=( FragTrap const& src )
{
	std::cout << "FragTrap " << src.getName() << " is assigned!" << std::endl;
	if ( this != &src )
	{
		setName(src.getName());
		setHitPoints(src.getHitPoints());
		setEnergyPoints(src.getEnergyPoints());
		setAttackDamage(src.getAttackDamage());
	}
	std::cout << "FragTrap " << getName() << " Hit Points: " << getHitPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "FragTrap " << getName() << " Attack Damage: " << getAttackDamage() << "\n" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " high fives guys!" << "\n" << std::endl;
}



