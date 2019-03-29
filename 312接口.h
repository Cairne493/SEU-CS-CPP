#include<iostream>
#include<string>

class Account
{
public:
	Account(int);
	void setBalance(int);
	int getBalance();
	void setCredit(int);
	int getCredit();
	void setDebit(int);
	int getDebit();
	void displayMessage();

private:
	int Credit, Debit, lance, balance;
};
