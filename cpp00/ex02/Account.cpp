/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:23:51 by novsiann          #+#    #+#             */
/*   Updated: 2023/12/04 15:05:57 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>

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

Account::Account(int initialDeposit)
{
    Account::_displayTimestamp();
    this->_amount = initialDeposit;
    this->_accountIndex = Account::_nbAccounts;
    std::cout<<"index:"<<this->_accountIndex<<";amount:"<<initialDeposit<<";created\n";
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << ";" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int tmp = this->_amount;
    
    Account::_displayTimestamp();
    if (this->_amount >= withdrawal)
        this->_amount = this->_amount - withdrawal;
    else
    {
        std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<tmp<<";withdrawal:refused\n";
        return(false);
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount = Account::_totalAmount - withdrawal;
    std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<tmp<<";withdrawal:"<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
    return(true);
}

Account::~Account(void)
{
	_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed:" << std::endl;
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

int     Account::getNbAccounts()
{
    return(Account::_nbAccounts);
}

int     Account::getNbDeposits()
{
    return(Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals()
{
    return(Account::_totalNbWithdrawals);
}

int     Account::getTotalAmount()
{
    return (Account::_totalAmount);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}
