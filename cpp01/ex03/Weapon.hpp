/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:42:57 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 15:47:07 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstdio>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string& getType(void);
		void setType(std::string type);
};

#endif
