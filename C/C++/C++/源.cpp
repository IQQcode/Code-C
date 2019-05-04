#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c, n, m;
	cout << "请输入一个整数： " << endl;
	cin >> n;
	a = n % 3 == 0;
	b = n % 5 == 0;
	c = n % 7 == 0;
	m = ((a << 2) + (b << 1) + c);
	switch (m)
	{
	case 0:
		cout << "不能被3，5，7整除！" << endl;
		break;
	case 1:
		cout << "只能被7整除！" << endl; //（000）+（000）+（001）
		break;
	case 2:
		cout << "只能被5整除！" << endl;
		break;
	case 3:
		cout << "能被5，7整除！" << endl;  //（000）+（010）+（001）
		break;
	case 4:
		cout << "只能被3整除！" << endl;
		break;
	case 5:
		cout << "能被3，7整除！" << endl;
		break;
	case 6:
		cout << "能被3，5整除！" << endl;
		break;
	case 7:
		cout << "能同时被3，5，7整除！" << endl;
		break;
	}
	system("pause");
	return 0;
}

