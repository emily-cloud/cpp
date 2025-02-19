/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 11:29:57 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap A("A");
	FragTrap B("B");
	FragTrap C("C");
	FragTrap D;
	D = A;//assignment operator
	FragTrap E = B;//copy constructor

	A.attack("enemy");
	A.takeDamage(5);
	A.attack("enemy");
	A.highFivesGuys();
	A.beRepaired(3);
	std::cout << std::endl;

	B.attack("enemy");
	B.takeDamage(12);
	B.attack("enemy");
	B.highFivesGuys();
	B.beRepaired(7);
	std::cout << std::endl;

	C.attack("enemy");
	C.takeDamage(8);
	C.attack("enemy");
	C.highFivesGuys();
	C.beRepaired(7);
	std::cout << std::endl;

	D.attack("enemy");
	D.takeDamage(8);
	D.attack("enemy");
	D.highFivesGuys();
	D.beRepaired(7);
	std::cout << std::endl;

	E.attack("enemy");
	E.takeDamage(8);
	E.attack("enemy");
	E.highFivesGuys();
	E.beRepaired(7);
	std::cout << std::endl;

	return 0;
}
