/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:45 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 13:50:52 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap
{
	protected:
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		ScavTrap();
		ScavTrap( std::string const& name);
		ScavTrap( ScavTrap const& src );
		~ScavTrap();
		ScavTrap&	operator=( ScavTrap const& src );

		void	guardGate();
};


#endif //SCAVTRAP_HPP
