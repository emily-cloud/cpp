/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 11:29:31 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap A("A");
	ScavTrap B("B");
	ScavTrap C("C");
	ScavTrap D;
	D = A; //assignment operator
	ScavTrap E = B;//copy constructor

	A.attack("enemy");
	A.takeDamage(5);
	A.attack("enemy");
	A.guardGate();
	A.beRepaired(3);

	B.attack("enemy");
	B.takeDamage(12);
	B.attack("enemy");
	B.guardGate();
	B.beRepaired(7);

	C.attack("enemy");
	C.takeDamage(8);
	C.attack("enemy");
	C.guardGate();
	C.beRepaired(7);

	D.attack("enemy");
	D.takeDamage(8);
	D.attack("enemy");
	D.guardGate();
	D.beRepaired(7);

	E.attack("enemy");
	E.takeDamage(8);
	E.attack("enemy");
	E.guardGate();
	E.beRepaired(7);

	return 0;
}
