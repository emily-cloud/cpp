/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:13:09 by hai               #+#    #+#             */
/*   Updated: 2025/02/03 14:03:41 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include <limits>
# include "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	exit();
		void	start();
	private:
		Contact		contacts[8];
		int			contactCount;
		int			oldestIndex;
};

#endif
