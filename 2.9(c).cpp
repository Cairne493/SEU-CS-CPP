//������
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b, c, d, e, f;

	cout << "��н ��" << endl;
	cin >> a;

	cout << "���� ��" << endl;
	cin >> b;

	cout << "ȫ�� ��" << endl;
	cin >> c;

	cout << "����һ�� ��" << endl;
	cin >> d;

	cout << "���� ��" << endl;
	cin >> e;

	f = a + b + c - d - e;

	cout << "�㱾�µĹ���Ϊ ��" << f << " Ԫ!" << endl;

	system("pause");

	return 0;


}