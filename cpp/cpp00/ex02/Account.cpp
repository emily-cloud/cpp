/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:14 by hai               #+#    #+#             */
/*   Updated: 2025/02/03 15:12:52 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ctime>
#include "Account.hpp"

Account( int initial_deposit)
{
	amount = initial_deposit;
	nbDeposits = 0;
	nbWithdrawals = 0;
	accountIndex = nbAccounts;
	nbAccounts++;
	totalAmount += initial_deposit;
	displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

static int	getNbAccounts( void )
{

}
static int	getTotalAmount( void )
{

}
static int	getNbDeposits( void )
{

}
static int	getNbWithdrawals( void )
{

}
static void	displayAccountsInfos( void )
{

}

static int	getNbAccounts( void ){

}

static int	getTotalAmount( void )
{

}
static int	getNbDeposits( void )
{

}
static int	getNbWithdrawals( void )
{

}
static void	displayAccountsInfos( void )
{

}

static void	_displayTimestamp( void )
{

}

Account( void )
{

}
