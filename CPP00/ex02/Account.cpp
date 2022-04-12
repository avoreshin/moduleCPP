/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:52:29 by jlamonic          #+#    #+#             */
/*   Updated: 2022/04/08 00:39:40 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void ){
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	std::cout<<"["<< timeinfo->tm_year + 1900 << timeinfo->tm_mon + 1
	<< timeinfo->tm_mday << "_" << timeinfo->tm_hour
	<< timeinfo->tm_min << timeinfo->tm_sec << "] ";
}

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:"<< Account::_accountIndex
	<< ";amount:"<<Account::_amount << ";created" << std::endl;
}
Account::~Account() {
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";amount:"
				<< _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout 	<< "accounts:"<< _nbAccounts << ";total:"<<_totalAmount
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << std::endl;
}
void	Account::makeDeposit( int deposit ){
	_nbDeposits += 1;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:"
				<< _amount << ";deposit:" << deposit << ";amount:"
				<< _amount + deposit << ";nb_deposits:"
				<< _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	
}
bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:"
	<< _amount << ";withdrawal:";
	if(_amount - withdrawal < 0)
		std::cout << "refused" << std::endl;
	else {
		_amount -= withdrawal;
		_nbWithdrawals ++;
		_totalNbWithdrawals++;
		_totalAmount -=withdrawal;
		std::cout << withdrawal << ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return 0;
}
int		Account::checkAmount( void ) const{
	return 0;
}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout	<< "index:"<< _accountIndex
				<< ";amount:"<< _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
