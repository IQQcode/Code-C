#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c, n, m;
	cout << "������һ�������� " << endl;
	cin >> n;
	a = n % 3 == 0;
	b = n % 5 == 0;
	c = n % 7 == 0;
	m = ((a << 2) + (b << 1) + c);
	switch (m)
	{
	case 0:
		cout << "���ܱ�3��5��7������" << endl;
		break;
	case 1:
		cout << "ֻ�ܱ�7������" << endl; //��000��+��000��+��001��
		break;
	case 2:
		cout << "ֻ�ܱ�5������" << endl;
		break;
	case 3:
		cout << "�ܱ�5��7������" << endl;  //��000��+��010��+��001��
		break;
	case 4:
		cout << "ֻ�ܱ�3������" << endl;
		break;
	case 5:
		cout << "�ܱ�3��7������" << endl;
		break;
	case 6:
		cout << "�ܱ�3��5������" << endl;
		break;
	case 7:
		cout << "��ͬʱ��3��5��7������" << endl;
		break;
	}
	system("pause");
	return 0;
}

