#include<iostream>
#include"312�ӿ�.h"
using namespace std;
int main()
{
	int ba;
	cout << "�������ʼ��� �� " << endl;
	cin >> ba;

	Account myAccount1(ba);
	myAccount1.setBalance(ba);

	int aa;
	cout << "����������� �� " << endl;
	cin >> aa;


	myAccount1.setCredit(aa);

	int bb;
	cout << "������֧����� �� " << endl;
	cin >> bb;


	myAccount1.setDebit(bb);
	myAccount1.displayMessage();

	system("pause");

}