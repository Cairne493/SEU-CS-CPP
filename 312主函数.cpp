#include<iostream>
#include"312接口.h"
using namespace std;
int main()
{
	int ba;
	cout << "请输入初始余额 ： " << endl;
	cin >> ba;

	Account myAccount1(ba);
	myAccount1.setBalance(ba);

	int aa;
	cout << "请输入存入金额 ： " << endl;
	cin >> aa;


	myAccount1.setCredit(aa);

	int bb;
	cout << "请输入支出金额 ： " << endl;
	cin >> bb;


	myAccount1.setDebit(bb);
	myAccount1.displayMessage();

	system("pause");

}