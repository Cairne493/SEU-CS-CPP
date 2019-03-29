//工资条
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b, c, d, e, f;

	cout << "底薪 ：" << endl;
	cin >> a;

	cout << "奖金 ：" << endl;
	cin >> b;

	cout << "全勤 ：" << endl;
	cin >> c;

	cout << "三险一金 ：" << endl;
	cin >> d;

	cout << "罚金 ：" << endl;
	cin >> e;

	f = a + b + c - d - e;

	cout << "你本月的工资为 ：" << f << " 元!" << endl;

	system("pause");

	return 0;


}