/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 13:53:02 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("A");
	ClapTrap B("B");
	ClapTrap C("C");

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

	return 0;
}
