//�ֱ�һ��������ż��
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b;

	cout << "����һ�������� ��" << endl;
	cin >> a;

	b = a / 2;

	if (2 * b == a)
		cout << "���������ż����" << endl;

	if (2 * b != a)
		cout << "���������������" << endl;

	system("pause");

	return 0;

}


