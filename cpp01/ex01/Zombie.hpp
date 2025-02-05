/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:11 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 15:04:08 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream> // Required for std::stringstream
#include <cstdio>  // Required for sprintf

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

std::string intToString(int i);
Zombie* zombieHorde(int N, std::string name);

#endif
