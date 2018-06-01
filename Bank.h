#pragma once

#include <iostream>
#include <string>

using namespace std;

class Bank
{
private:
	double accountNum;
	string name;
	double balance;
	string accountType;
public:
	Bank();
	Bank(double, string, double);
	void setActNum(double);
	void setName(string);
	void setBalance(double);
	void setAccountType(string);
	double getAccountNumber() const
	{
		return accountNum;
	}
	string getName() const
	{
		return name;
	}
	double getBalance() const
	{
		return balance;
	}
	string getAccountType() const
	{
		return accountType;
	}
	void withdraw(double);
	void deposit(double);
	~Bank();
};

class SavingsAccount : public Bank
{
private:
	double annualInterest;
	int numDays;			//For compounding period
public:
	SavingsAccount();
	SavingsAccount(double, string, double, double, int);
	void setAnnInt(double);
	void setNumDays(int);
	double getAnnInt() const
	{
		return annualInterest;
	}
	double getNumDays() const
	{
		return numDays;
	}
	double AddInterest(int, double);
	~SavingsAccount();
};

class CheckingAccount : public Bank
{
private: 
	double minBalance;
	double monthlyFee;
public:
	CheckingAccount();
	CheckingAccount(double, string, double, double, double);
	void setMinBalance(double);
	void setMF(double);
	double getMinBalance() const
	{
		return minBalance;
	}
	double getMonthlyFee() const
	{
		return monthlyFee;
	}
	~CheckingAccount();
};