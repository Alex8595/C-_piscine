#include <iostream>
#include "Account.hpp"

// ************************************************************************** //
//                                   Static                                   //
// ************************************************************************** //

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts + 1);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}


int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	//accounts:8;total:20049;deposits:0;withdrawals:0
	std::cout << "accounts:"	<<		getNbAccounts()		<< ";";
	std::cout << "total:"		<< 		getTotalAmount()	<< ";";
	std::cout << "deposits:"	<< 		getNbDeposits()		<< ";";
	std::cout << "withdrawals:"	<< 		getNbWithdrawals()	<< ";";
	std::cout << std::endl;
}


// ************************************************************************** //
//                                 Non Static                                 //
// ************************************************************************** //

void	Account::makeDeposit( int deposit )
{
	//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	
	std::cout << "index:"		<< this->_accountIndex	<< ";";
	std::cout << "p_amount:"	<< this->_amount		<< ";";
	std::cout << "deposit:"		<< deposit				<< ";";
	if (deposit > 0)
	{
		this->_nbDeposits++;
		_totalNbDeposits++;

		this->_amount += deposit;
		_totalAmount += deposit;

		std::cout << "amount:"		<< this->_amount		<< ";";
		std::cout << "nb_deposits:"	<< this->_nbDeposits	<< ";";
		std::cout << std::endl;
	}
	else
		std::cout << "Deposit is negative" <<	std::endl;;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	//index:0;p_amount:47;withdrawal:refused
	//index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

	std::cout << "index:"		<< this->_accountIndex	<< ";";
	std::cout << "p_amount:"	<< this->_amount		<< ";";
	if (this->_totalAmount - withdrawal)
	{
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;

		this->_nbWithdrawals++;
		_totalNbWithdrawals++;


		std::cout << "withdrawal:"		<< withdrawal			<< ";";
		std::cout << "amount:"			<< this->_amount		<< ";";
		std::cout << "nb_withdrawals:"	<< this->_nbWithdrawals	<< ";";
		return (true);
	}
	else
		std::cout << "withdrawal:refused"	<< ";";
	std::cout << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	//index:0;amount:42;deposits:0;withdrawals:0
	std::cout << "index:"		<< this->_accountIndex			<< ";";
	std::cout << "amount:"		<< this->_amount				<< ";";
	std::cout << "deposits:"	<< this->_nbDeposits			<< ";";
	std::cout << "withdrawals:"	<< this->_nbWithdrawals			<< ";";
	std::cout << std::endl;
}


// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //

Account::Account( void )
{
	this->_amount = 0;
	this->_nbAccounts += 1;
	std::cout << "index:"	<<	this->getNbAccounts() - 1	<<	";";
	std::cout << "amount:"	<<	this->checkAmount()			<<	";";
	std::cout << "created"	<<	std::endl;
	return ;
}

Account::Account( int initial_deposit )
{
	this->_nbAccounts += 1;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	std::cout << "index:"	<<	this->_accountIndex		<<	";";
	std::cout << "amount:"	<<	this->checkAmount()		<<	";";
	std::cout << "created"	<<	std::endl;
	_totalAmount += initial_deposit;
	return ;
}

Account::~Account( void )
{
	//index:0;amount:47;closed
	std::cout << "index:"	<<	this->_accountIndex		<<	";";
	std::cout << "amount:"	<<	this->checkAmount()		<<	";";
	std::cout << "closed"	<<	std::endl;
	return ;
}