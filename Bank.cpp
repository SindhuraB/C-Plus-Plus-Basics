#include "stdafx.h"
#include "Bank.h"
#include <string>

Bank::Bank()
{
	accountNum = 9999;
	name = "";
	balance = 0;
	accountType = "General";
}

Bank::Bank(double an, string n, double b)
{
	accountNum = an;
	name = n;
	balance = b;
	accountType = "General";
}

void Bank::setActNum(double an)
{
	accountNum = an;
}

void Bank::setName(string n)
{
	name = n;
}

void Bank::setBalance(double b)
{
	balance = b;
}

void Bank::setAccountType(string s)
{
	accountType = s;
}

void Bank::withdraw(double amt)
{
	//If there is not enough money in account to withdraw needed amt, inform user
	if (balance < amt)
	{
		cout << "Insufficient funds in the account." << endl;
		cout << "Balance in account is: " << balance << endl;
		cout << "You will now be returned to main menu." << endl;
		cout << endl;
		return;
	}
	else
	{
		balance -= amt;
	}
}

void Bank::deposit(double amt)
{
	balance += amt;
}

Bank::~Bank()
{
}

/**************************************************************/

SavingsAccount::SavingsAccount() : Bank()
{
	annualInterest = 0;
	numDays = 0;

	//Set account type to savings. 
	string at = "Savings";
	setAccountType(at);
}

SavingsAccount::SavingsAccount(double ActN, string nm, double blc, double anI, int d): Bank(ActN, nm, blc)
{
	//As private members of a base class are inaccessable, base class constructor is called.
	annualInterest = anI;
	numDays = d;

	//Set account type to savings. 
	string at = "Savings";
	setAccountType(at);
}

void SavingsAccount::setAnnInt(double ai)
{
	annualInterest = ai;
}

void SavingsAccount::setNumDays(int d)
{
	numDays = d;
}

double SavingsAccount::AddInterest(int days, double rate)
{
	double principleAmt = getBalance();
	double interest = principleAmt * ( 1 + (rate * days ));

	double AmtWithInterest = principleAmt + interest;
	return AmtWithInterest;
}

SavingsAccount::~SavingsAccount()
{
}

/*****************************************************************/

CheckingAccount::CheckingAccount(): Bank ()
{
	minBalance = 0;
	monthlyFee = 0;
	//Set account type to checking. 
	string at = "Checking";
	setAccountType(at);
}

CheckingAccount::CheckingAccount(double ActN, string nm, double blc, double mb, double mf): Bank(ActN, nm, blc)
{
	//As private members of a base class are inaccessable, base class constructor is called.
	minBalance = mb;
	monthlyFee = mf;

	//Set account type to checking. 
	string at = "Checking";
	setAccountType(at);
}

void CheckingAccount::setMinBalance(double mb)
{
	minBalance = mb;
}

void CheckingAccount::setMF(double mf)
{
	monthlyFee = mf;
}

CheckingAccount::~CheckingAccount()
{
}
