/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:27:55 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 15:13:25 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name <<" is dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
	this->name = name;
	std::cout << this->name <<" is born" << std::endl;
	announce();
}
