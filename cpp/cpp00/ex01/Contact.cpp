/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:37:48 by hai               #+#    #+#             */
/*   Updated: 2025/02/02 18:51:01 by hai              ###   ########.fr       */
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
    if (this->firstName.empty())
        return 1;

    // Display the column headers
    std::cout << std::setw(10) << std::left << "Index"
              << " | " << std::setw(10) << std::right << "First Name"
              << " | " << std::setw(10) << std::right << "Last Name"
              << " | " << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    // Display the contact details with left alignment
    std::cout << std::setw(10) << std::right << index
              << " | " << std::setw(10) << std::right
              << (firstName.length() > 10 ? firstName.substr(0, 9) + '.' : firstName)
              << " | " << std::setw(10) << std::right
              << (lastName.length() > 10 ? lastName.substr(0, 9) + '.' : lastName)
              << " | " << std::setw(10) << std::right
              << (nickname.length() > 10 ? nickname.substr(0, 9) + '.' : nickname)
              << std::endl;

    return 0;
}

