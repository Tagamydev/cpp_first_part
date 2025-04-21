#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstdio>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _amount = 0;
    _nbDeposits = -1;
    _accountIndex = _nbAccounts++;
    makeDeposit(initial_deposit);
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << 
	"amount:" << _amount << ";" << 
	"created" << std::endl;
}

Account::~Account(void) {
    _nbAccounts--;
    _totalAmount -= _amount;
    _totalNbDeposits -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << 
	"amount:" << _amount << ";" << 
	"closed" << std::endl;
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << 
	"total:" << _totalAmount << ";" << 
	"deposits:" << _totalNbDeposits << ";" << 
	"withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    if (_nbDeposits++ != -1)
    {
        _totalNbDeposits++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";" << 
        "p_amount:" << p_amount << ";" << 
        "deposit:" << deposit << ";" << 
        "amount:" << _amount << ";" << 
        "nb_deposits:" << _nbDeposits << std::endl;
    }
}

bool Account::makeWithdrawal(int withdrawal) {
    int result = _amount - withdrawal, p_amount = _amount;

    if (result < 0)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";" << 
        "p_amount:" << p_amount << ";" << 
        "withdrawal:refused" << std::endl;
        return false; 
    }
    _amount = result;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << 
    "p_amount:" << p_amount << ";" << 
    "withdrawal:" << withdrawal << ";" << 
    "amount:" << _amount << ";" << 
    "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const {
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << 
	"amount:" << _amount << ";" << 
	"deposits:" << _nbDeposits << ";" << 
	"withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm* t = std::localtime(&now);

    if (!t) {
        return ;
    }
    char buf[32];
    if (std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", t) == 0) {
        return ;
    }
    std::cout << buf << " ";
}

Account::Account(void) {}
