/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:45 by hai               #+#    #+#             */
/*   Updated: 2025/02/19 11:07:01 by huahua           ###   ########.fr       */
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
};


#endif //SCAVTRAP_HPP
