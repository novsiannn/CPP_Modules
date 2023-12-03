/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:23:51 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/03 19:59:24 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	time_t res = std::time(NULL);
	std::cout << "[" << 1900 + std::localtime(&res)->tm_year;
	std::cout << 1 + std::localtime(&res)->tm_mon;
	std::cout << std::localtime(&res)->tm_mday;
	std::cout << "_";
	std::cout << std::localtime(&res)->tm_hour;
	std::cout << std::localtime(&res)->tm_min;
	std::cout << std::localtime(&res)->tm_sec << "] ";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
}