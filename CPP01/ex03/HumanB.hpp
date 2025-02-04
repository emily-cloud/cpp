/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:57:24 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 16:51:23 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		//HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
};

#endif
