/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 12:47:26 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("A");
	ClapTrap B("B");
	ClapTrap C("C");
	ClapTrap D = A;
	ClapTrap E;

	E = B;

	A.attack("enemy");
	A.takeDamage(5);
	A.attack("enemy");
	A.beRepaired(3);

	B.attack("enemy");
	B.takeDamage(12);
	B.attack("enemy");
	B.beRepaired(7);

	C.attack("enemy");
	C.takeDamage(8);
	C.attack("enemy");
	C.beRepaired(7);

	D.attack("enemy");
	D.takeDamage(5);
	D.attack("enemy");
	D.beRepaired(3);

	E.attack("enemy");
	E.takeDamage(12);
	E.attack("enemy");
	E.beRepaired(7);

	return 0;
}
