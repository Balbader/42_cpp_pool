/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:03:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/16 15:03:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


// ----------------------------------------------------> Variable redeclaration
int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


// ---------------------------------------------------------------> Constructor
Account::Account(int initial_deposit) : _accountIndex(getNbAccounts()), _amount(initial_deposit)
{
    _displayTimestamp();
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += _amount;

    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();

     std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}


// ---------------------------------------------------------> Display functions
void Account::_displayTimestamp(void)
{

    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);

    std::cout << "[" << (now->tm_year + 1900);

    if (now->tm_mon + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mon + 1);

    if (now->tm_mday + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mday + 1);

    if (now->tm_mon + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mon + 1) << '_';

    if (now->tm_hour + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_hour + 1);

    if (now->tm_min + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_min + 1);

    if (now->tm_sec + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_sec + 1) << "] ";
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();

    std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}


// ------------------------------------------------------------> Make functions
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";

    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    
    std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:";

    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;

    std::cout << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;

    return true;
}


// --------------------------------------------------------------------> Getter
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

int Account::checkAmount(void) const
{
    return _amount;
}
