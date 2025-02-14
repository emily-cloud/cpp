/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:19:13 by hai               #+#    #+#             */
/*   Updated: 2025/02/14 18:20:51 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string const& name);
		FragTrap( FragTrap const& src );
		~FragTrap();
		FragTrap&	operator=( FragTrap const& src );

		void	highFivesGuys();
		void	setFragName( std::string const& name );
		void	setFragHitPoints( unsigned int hitPoints );
		void	setFragEnergyPoints( unsigned int energyPoints );
		void	setFragAttackDamage( unsigned int attackDamage );
		std::string	getFragName() const;
		unsigned int	getFragHitPoints() const;
		unsigned int	getFragEnergyPoints() const;
		unsigned int	getFragAttackDamage() const;
};

#endif
