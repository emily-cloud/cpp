/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:35:48 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 15:14:11 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


std::string intToString(int i)
{
	char buffer[20];
	sprintf(buffer, "%d", i);
	return std::string(buffer);
}

// Alternative implementation
// std::string intToString(int i)
// {
// 	std::stringstream ss;
// 	ss << i;
// 	return ss.str();
// }

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;

	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name + intToString(i + 1));

	return horde;
}

