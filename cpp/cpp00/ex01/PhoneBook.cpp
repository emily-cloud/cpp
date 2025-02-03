/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahua <huahua@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:16:56 by hai               #+#    #+#             */
/*   Updated: 2025/02/03 08:51:51 by huahua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0)
{
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::start()
{
	std::string command;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			add();
		}
		else if (command == "SEARCH")
		{
			search();
		}
		else if (command == "EXIT")
		{
			exit();
			break;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
}

void PhoneBook::add()
{
	if (contactCount == 8)
	{
		contacts[oldestIndex].setDetails();
		oldestIndex = (oldestIndex + 1) % 8;
	}
	else
	{
		contacts[contactCount].setDetails();
		contactCount++;
	}
}

void PhoneBook::search()
{
	int index;

	while(1)
	{
		std::cout << "Enter search index: ";
		if(!(std::cin >> index) || index <= 0 || index > 8)
		{
			std::cout << "Invalid index, please enter a valid index between 1 to 8" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		else
		{
			if(contacts[index - 1].displayDetails(index - 1) == 0)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
			else
			{
				std::cout << "No contact found at index " << index << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
		}
	}
}

void PhoneBook::exit()
{
	std::cout << "Exiting PhoneBook" << std::endl;
}
