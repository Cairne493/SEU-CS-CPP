#include<iostream>
#include"312�ӿ�.h"
using namespace std;

Account::Account(int lance)
{
	setBalance(lance);
}
void Account::setBalance(int lance)
{
	if (lance >= 0)
		balance = lance;
	if (lance < 0)
	{
		balance = 0;
		cerr << "�ó�ʼ�����Ч" << endl;
	}
}

void Account::setCredit(int a)
{
	balance = balance + a;
}
int Account::getBalance()
{
	return Credit;
}

void Account::setDebit(int b)
{
	if (b <= balance)
		balance = balance - b;
	if (b > balance)
	{
		cerr << "Debit amount exceeded account balance." << endl;
	}
}
int Account::getDebit()
{
	return Debit;
}

void Account::displayMessage()
{
	cout << "ʣ�����Ϊ" << balance << endl;
}