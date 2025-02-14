/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 17:26:38 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap A("A");
	FragTrap B("B");
	FragTrap C("C");
	FragTrap D;
	D = A;
	FragTrap E(B);

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
