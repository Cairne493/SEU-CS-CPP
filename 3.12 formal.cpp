#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
	Account(int lance)
	{
		setBalance(lance);
	}
	void setBalance(int lance)
	{
		if (lance >= 0)
			balance = lance;
		if (lance < 0)
		{
			balance = 0;
			cerr << "�ó�ʼ�����Ч" << endl;
		}
	}
	int getBalance()
	{
		return balance;
	}
	void setCredit(int a)
	{
		balance = balance + a;
	}
	int getCredit()
	{
		return Credit;
	}
	void setDebit(int b)
	{
		if (b <= balance)
			balance = balance - b;
		if (b > balance)
		{
			cerr << "Debit amount exceeded account balance." << endl;

		}
	}
	int getDebit()
	{
		return Debit;
	}
	void displayMessage()
	{
		cout << "ʣ�����Ϊ" << balance << endl;
	}
private:
	int Credit, Debit, lance, balance;
};
int main()
{
	int ba;
	cout << "�������ʼ��� �� " << endl;
	cin >> ba;

	Account myAccount(ba);
	myAccount.setBalance(ba);

	int aa;
	cout << "����������� �� " << endl;
	cin >> aa;


	myAccount.setCredit(aa);

	int bb;
	cout << "������֧����� �� " << endl;
	cin >> bb;


	myAccount.setDebit(bb);
	myAccount.displayMessage();
	
	system("pause");
}