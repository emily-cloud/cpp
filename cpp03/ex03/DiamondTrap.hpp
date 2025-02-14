/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:35:43 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 18:38:21 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap :public ScavTrap , public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap( std::string const& name);
		DiamondTrap( DiamondTrap const& src );
		~DiamondTrap();
		DiamondTrap&	operator=( DiamondTrap const& src );

		void	whoAmI();
		void	attack( const std::string& target );
		void	setDiamondName( std::string const& name );
		void	setDiamondHitPoints( unsigned int hitPoints );
		void	setDiamondEnergyPoints( unsigned int energyPoints );
		void	setDiamondAttackDamage( unsigned int attackDamage );
		std::string	getDiamondName() const;
		unsigned int	getDiamondHitPoints() const;
		unsigned int	getDiamondEnergyPoints() const;
		unsigned int	getDiamondAttackDamage() const;
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	};

#endif
