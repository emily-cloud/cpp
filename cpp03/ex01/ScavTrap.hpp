/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:45 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 15:52:07 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string const& name);
		ScavTrap( ScavTrap const& src );
		~ScavTrap();
		ScavTrap&	operator=( ScavTrap const& src );

		void	guardGate();
		void	setScavName( std::string const& name );
		void	setScavHitPoints( unsigned int hitPoints );
		void	setScavEnergyPoints( unsigned int energyPoints );
		void	setScavAttackDamage( unsigned int attackDamage );
		std::string	getScavName() const;
		unsigned int	getScavHitPoints() const;
		unsigned int	getScavEnergyPoints() const;
		unsigned int	getScavAttackDamage() const;
};

#endif //SCAVTRAP_HPP
