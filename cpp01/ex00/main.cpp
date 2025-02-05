/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:29:40 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 12:38:17 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie1 = newZombie("Zombie_heap1");
	Zombie1->announce();
	Zombie *Zombie2 = newZombie("Zombie_heap2");
	Zombie2->announce();
	Zombie *Zombie3 = newZombie("Zombie_heap3");
	Zombie3->announce();
	Zombie *Zombie4 = newZombie("Zombie_heap3");
	Zombie4->announce();
	randomChump("Zombie_stack1");
	randomChump("Zombie_stack2");
	randomChump("Zombie_stack3");
	randomChump("Zombie_stack4");
	delete Zombie1;
	delete Zombie2;
	delete Zombie3;
	delete Zombie4;
	return (0);
}
