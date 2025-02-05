/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:05:34 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 17:12:41 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string level;

	if(argc != 2)
	{
		std::cout << "Usage: ./harl <level>" << std::endl;
		return 1;
	}
	else
	{
		level = argv[1];
		if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		{
			std::cout << "Input level error, Level is one of (DEBUG, INFO, WARNING,ERROR)" << std::endl;
			return 1;
		}
		harl.complain(level);
	}
	return 0;
}
