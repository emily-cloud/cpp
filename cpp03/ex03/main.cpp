/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:37:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 12:17:21 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// main.cpp for testing
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d1("Diamond1");
    DiamondTrap d2("Diamond2");
    DiamondTrap d3;
    d3 = d1;
	DiamondTrap d4 = d2;

    d1.whoAmI();
    d1.attack("target");
    d1.guardGate();
    d1.highFivesGuys();

    d2.whoAmI();
    d2.attack("target");
    d2.guardGate();
    d2.highFivesGuys();

	d3.whoAmI();
    d3.attack("target");
    d3.guardGate();
    d3.highFivesGuys();

	d4.whoAmI();
    d4.attack("target");
    d4.guardGate();
    d4.highFivesGuys();


    return 0;
}
