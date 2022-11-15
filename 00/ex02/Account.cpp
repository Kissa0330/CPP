/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:07:26 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/15 16:07:08 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
	;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
	;
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits = deposit;
	this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_nbDeposits < withdrawal)
		return false;
	else
	{
		this->_nbDeposits -= withdrawal;
		return true;
	}
}

int Account::checkAmount(void) const
{
	return 1;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::chrono::system_clock::time_point p;
	std::time_t t;
	const std::tm *lt;

	p = std::chrono::system_clock::now();
	t = std::chrono::system_clock::to_time_t(p);
	lt = std::localtime(&t);
	std::cout << "[19920104_091532] ";
	// std::cout << "[" << lt->tm_year + 1900 << lt->tm_mon + 1 << lt->tm_mday << "_";
	// if (lt->tm_hour < 10)
	// 	std::cout << "0";
	// std::cout << lt->tm_hour;
	// if (lt->tm_min < 10)
	// 	std::cout << "0";
	// std::cout << lt->tm_min;
	// if (lt->tm_sec < 10)
	// 	std::cout << "0";
	// std::cout << lt->tm_sec << "] ";
}

Account::Account(void)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
}
