/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 18:09:04 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	DiamondTrap A("A");
	DiamondTrap B("B");
	DiamondTrap C("C");
	DiamondTrap D;
	D = A;
	DiamondTrap E(B);


	A.whoAmI();
	std::cout << std::endl;

	B.whoAmI();
	std::cout << std::endl;

	C.whoAmI();
	std::cout << std::endl;

	D.whoAmI();
	std::cout << std::endl;

	E.whoAmI();
	std::cout << std::endl;

	return 0;
}
