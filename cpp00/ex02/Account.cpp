/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:14 by hai               #+#    #+#             */
/*   Updated: 2025/02/04 10:54:24 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include <sys/time.h>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	std::cout << "[" << tv.tv_sec << "_" << tv.tv_usec << "] ";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;

	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;

	std::cout <<";deposit:" << deposit << ";amount:" << this->_amount
		<< "; nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount >= withdrawal)
	 {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount;

		this->_amount -= withdrawal;
		 _totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;

		std::cout<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
			<< this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() << ";withdrawals:"
			<< getNbWithdrawals() << std::endl;

}
