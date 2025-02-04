/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:16:56 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 11:09:35 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0)
{
	std::cout << "Your phonebook is ready" << std::endl;
	std::cout << "Command ADD: add new contact to phonebook" << std::endl;
	std::cout << "Command SEARCH: search for exicted contact from phonebook" << std::endl;
	std::cout << "Command EXIT: exit and clean phonebook" << std::endl;
	std::cout << "-------------------Let us start-------------------" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Your phonebook date has been cleaned" << std::endl;
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

	if(contactCount == 0)
	{
		std::cout << "No contacts available" << std::endl;
		return;
	}
	else
	{
		std::cout << std::setw(10) << std::right << "Index"
			<< " | " << std::setw(10) << std::right << "First Name"
			<< " | " << std::setw(10) << std::right << "Last Name "
			<< " | " << std::setw(10) << std::right << "Nickname "
			<< std::endl;
		for(int i = 0; i < contactCount; i++)
		{
			contacts[i].displayDetails(i);
		}
	}

	while(1)
	{
		std::cout << "Enter search index (from 1 to 8): ";
		if(!(std::cin >> index) || index <= 0 || index > 8)
		{
			std::cout << "Invalid index, please enter a valid index between 1 to 8" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		else
		{
			if(contacts[index - 1].displayFullContact(index - 1) == 0)
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
