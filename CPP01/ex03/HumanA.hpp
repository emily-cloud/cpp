/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:39 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 20:42:05 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon* weapon;
		//also works with Weapon& weapon

	public:
		//HumanA();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
};

#endif
