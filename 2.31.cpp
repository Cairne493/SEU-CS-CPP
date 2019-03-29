//省油app
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int x;

	cout << "每天开车的全部里程数 ：" << endl;
	cin >> a;

	cout << "每升油的价格 : " << endl;
	cin >> b;

	cout << "每升油可以开的平均公里数 ； "<<endl;
	cin >> c;

	cout << "每天停车的费用 : " << endl;
	cin >> d;

	cout << "每天所要交纳的路费 ： " << endl;
	cin >> e;

	x = a*b*c + d + e;
	cout << "你每天开出所需的费用如下 ： " << x << endl;

	system("pause");

	return 0;


}