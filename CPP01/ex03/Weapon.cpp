/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:45:21 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 16:33:57 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon created: " << this->type << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "Weapon " << this->type << " is destroyed" << std::endl;
}
const std::string& Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
