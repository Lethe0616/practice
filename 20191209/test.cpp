#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int& ra = a;

	a = 10;
	cout << &a << endl;

	//int&& rra = a;����ʧ�ܣ�a����ֵ
	int&& rra = 10;
	return 0;
}