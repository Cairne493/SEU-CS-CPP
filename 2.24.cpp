//分辨一个数的奇偶性
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b;

	cout << "输入一个正整数 ：" << endl;
	cin >> a;

	b = a / 2;

	if (2 * b == a)
		cout << "这个数字是偶数！" << endl;

	if (2 * b != a)
		cout << "这个数字是奇数！" << endl;

	system("pause");

	return 0;

}


