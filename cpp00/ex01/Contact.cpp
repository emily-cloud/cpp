/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:37:48 by hai               #+#    #+#             */
/*   Updated: 2025/02/03 14:52:10 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setDetails()
{
	do{
		std::cout << "Enter firstname: ";
		std::getline(std::cin,firstName);
	}while(this->firstName.empty());

	do{
		std::cout << "Enter lastname: ";
		std::getline(std::cin,lastName);
	}while(this->lastName.empty());

	do{
		std::cout << "Enter nickname: ";
		std::getline(std::cin,nickname);
	}while(this->nickname.empty());

	do{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phoneNumber);
	}while(this->phoneNumber.empty());

	do{
		std::cout << "Enter darkestSecret: ";
		std::getline(std::cin, darkestSecret);
	}while(this->darkestSecret.empty());
}


int Contact::displayDetails(int index) const
{
	int index_display;
	if (this->firstName.empty())
	{
		return 1;
	}
	index_display = index + 1;
	std::cout << std::setw(10) << std::right << index_display
			<< " | " << std::setw(10) << std::right
			<< (firstName.length() > 10 ? firstName.substr(0, 9) + '.' : firstName)
			<< " | " << std::setw(10) << std::right
			<< (lastName.length() > 10 ? lastName.substr(0, 9) + '.' : lastName)
			<< " | " << std::setw(10) << std::right
			<< (nickname.length() > 10 ? nickname.substr(0, 9) + '.' : nickname)
			<< std::endl;

	return 0;
}

int Contact::displayFullContact(int index) const
{
	if (this->firstName.empty())
	{
		return 1;
	}
	else
	{
		int index_display = index + 1;
		std::cout << "index:" << index_display << std::endl;
		std::cout << "first name:" << firstName << std::endl;
		std::cout << "last name:" << lastName << std::endl;
		std::cout << "nickname:" << nickname << std::endl;
		std::cout <<"phone number:" << phoneNumber << std::endl;
		std::cout << "darkest secret:" << darkestSecret << std::endl;
	}
	return 0;
}

